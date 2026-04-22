class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<long long,long long>>adj[n+1];
        for(auto it : times){
            adj[it[0]].push_back({it[1],it[2]});
        }
        priority_queue<pair<long, long>,vector<pair<long, long>>, greater<pair<long, long>>> pq;
        vector<long long>dist(n+1,1e18);
        dist[k] = 0;
        pq.push({0,k});
        while(!pq.empty()){
            long long distance = pq.top().first;
            long long node = pq.top().second;
            pq.pop();
            for(auto it : adj[node]){
                long long adjnode = it.first;
                long long cost = it.second;
                if(distance+cost<dist[adjnode]){
                    dist[adjnode] = distance+cost;
                    pq.push({dist[adjnode],adjnode});
                }
            }
        }
        long long res = 0; 
        for(int i = 1; i<=n; ++i){
            if(dist[i]==1e18) return -1;
            else  res = max(res,dist[i]);
        }
        return res;

        
    }
};
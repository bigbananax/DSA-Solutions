class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        const int mode = 1e9+7;
        vector<pair<int,int>> adj[n];
        for(auto it : roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue<pair<long, long>,vector<pair<long, long>>, greater<pair<long, long>>> pq;
        vector<long long >distance(n,LLONG_MAX);
        vector<int>ways(n,0);
        int count = 0;
        distance[0] = 0;
        ways[0]  = 1;
        pq.push({0,0});
        while(!pq.empty()){
            long long dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for(auto it : adj[node]){
                int adjnode = it.first;
                int cost  =  it.second;
                if(dis+cost<distance[adjnode]){
                    distance[adjnode] = dis+cost;
                    pq.push({distance[adjnode],adjnode});
                    ways[adjnode] = ways[node];
                }
                else if(dis+cost==distance[adjnode]){
                    ways[adjnode] = (ways[adjnode] + ways[node]) %(int) mode;
                }

            }
        }
        return ways[n-1];
        
    }
};
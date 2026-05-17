class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<bool>vis(n,false);
        queue<int>q;
        q.push(start);
        vis[start] = true;
        while(!q.empty()){
            int i = q.front();
            q.pop();
            if(arr[i]==0) return true;
            int next = i+arr[i];
            int back = i-arr[i];
            if(next<n && !vis[next]){
                vis[next]=true;
                q.push(next);
            }
            if(back>=0 && !vis[back]){
                vis[back] = true;
                q.push(back);
            }
        }
        return false;
        
    }
};
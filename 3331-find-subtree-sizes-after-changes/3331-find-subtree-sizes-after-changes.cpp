class Solution {
public:
    vector<vector<int>> adj; // Children in the original tree
    vector<int> resultSize; // Final subtree sizes
    vector<int> last; // Latest node for each letter on the DFS path

    void dfs(int currNode, string& s, vector<int>& parent){
        int letter = s[currNode] - 'a';
        int nearestAncestor = last[letter];
        last[letter] = currNode;
        for(int child : adj[currNode]){

            dfs(child, s, parent);
        }
        last[letter] = nearestAncestor;
        if(currNode == 0){
            return;
        }
        int newParent = parent[currNode];
        if(nearestAncestor != -1){
           
            newParent = nearestAncestor;
        }
        parent[currNode] = newParent;
        resultSize[newParent] += resultSize[currNode];
    }
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        
        int n = parent.size();
        adj.assign(n, {});

        for(int node = 1; node < n; node++){

            adj[parent[node]].push_back(node);
        }
        resultSize.assign(n, 1);
        last.assign(26, -1);
        dfs(0, s, parent);

        return resultSize;
       
    }
};
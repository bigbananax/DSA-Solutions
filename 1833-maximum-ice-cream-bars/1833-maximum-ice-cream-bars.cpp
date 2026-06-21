class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int k = coins;
        sort(costs.begin(),costs.end());
        int count = 0;
        for(int i = 0; i<costs.size(); ++i){
            if(k>0){
                k-=costs[i];
                if(k>=0){
                    count++;
                }
            }
            
        }
        return count;
        
    }
};
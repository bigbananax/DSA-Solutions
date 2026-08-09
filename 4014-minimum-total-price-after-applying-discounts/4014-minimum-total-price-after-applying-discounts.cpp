class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int n1 = prices.size()-1;
        int n2 = discounts.size()-1;
        double ans = 0; 
        while(n1>=0 && n2>=0){
            ans+=prices[n1]*(100.0-discounts[n2])/100.0;
            n1--;
            n2--;
        }
        while(n1>=0){
            ans+=prices[n1--];
        }
        return ans;
    }
};
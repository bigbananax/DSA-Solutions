class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k--){
           auto max1 = max_element(gifts.begin(),gifts.end());
           int ans = (int)sqrt(*max1);
           gifts.erase(max1);
           gifts.push_back(ans);

        }
        long long sum = accumulate(gifts.begin(),gifts.end(),0LL);
        return sum;
        
    }
};
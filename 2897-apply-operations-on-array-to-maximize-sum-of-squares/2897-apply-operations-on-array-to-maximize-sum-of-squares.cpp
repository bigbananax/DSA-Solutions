class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        int n = nums.size();
        int mod = 1e9+7;
        vector<int> bits(32, 0);
        for(auto &x: nums){
            for(int b=0;b<32;b++){
                if((x>>b)&1) bits[b]++;
            }
        }
        int sum = 0;
        while(k){
            int number = 0;
            for(int i=0;i<31;i++){
                if(bits[i]>0){
                    bits[i]--;
                    number|= (1<<i);
                }
            }
            sum = (sum+ 1LL*number*number)%mod;
            k--;
        }
        return sum;
    }
};
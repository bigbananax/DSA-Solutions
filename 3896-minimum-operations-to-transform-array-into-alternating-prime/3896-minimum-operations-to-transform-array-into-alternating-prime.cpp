class Solution {
public:
    bool prime(int n){
        if(n==1 || n==0) return false;
        for(int i = 2; i*i<=n; ++i){
            if(n%i==0) return false;
            
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        long long ans = 0; 
        for(int i = 0; i<nums.size(); ++i){
            int k = nums[i];
            if(i%2==0){
                if(prime(k)) continue;
                while(!prime(k)){
                    k++;
                }
                ans+=k-nums[i];

            }
            else{
                
                if(!prime(k)) continue;
                while(prime(k)){
                    k++;
                }
                ans+=k-nums[i];
            }
        }
        return ans;
        
        
    }
};
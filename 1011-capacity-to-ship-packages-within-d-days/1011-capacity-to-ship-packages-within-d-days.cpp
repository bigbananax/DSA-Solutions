class Solution {
private: 
    bool ok(vector<int>& weights , int days ,int cap){
        int n = weights.size();

        int cr = 0;
        int day = 1; 

        for(int i = 0; i<n; ++i){
            if(weights[i]+cr>cap){
                cr = 0; 
                day++;
            }
            cr+=weights[i];
        }
        return day<=days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int left = *max_element(weights.begin(),weights.end());
        int right = accumulate(weights.begin(),weights.end(),0);

        int ans = 0;
        while(left<=right){

            
            int mid = left+(right-left)/2;

            if(ok(weights,days,mid)){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
        
    }
};
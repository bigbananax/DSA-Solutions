class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int start = 0; 
        int sum = 0; 
        int count = 0;
        for(int i = 0; i<k; ++i){
            sum+=arr[i];
        }
        if(sum>=k*threshold){
            count++;
        }
        for(int i = k; i<=n-1; ++i){
            sum-=arr[start];
            sum+=arr[i];
            if(sum>=k*threshold){
                count++;
            }
            start++;
            
        }
        return count;
        
    }
};
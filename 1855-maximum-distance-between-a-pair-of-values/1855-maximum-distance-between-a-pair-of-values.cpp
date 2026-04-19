class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int l = 0;
        int r = 0;
        int n1 = nums1.size();
        int n2 =  nums2.size();
        int ans = 0;
        while(l<n1 && r<n2 ){
            if(nums1[l]<=nums2[r]){
                ans = max(ans,r-l);
                r++;
            }
            else l++;
        }
        return ans;
        
    }
};
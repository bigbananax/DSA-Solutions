class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftsum;
        vector<int>rightsum;
        vector<int>final1;
        int sum1 = 0; 
        for(int i = 0; i<nums.size(); ++i){
            leftsum.push_back(sum1);
            sum1+=nums[i];
        }
        int sum2 = 0;
        int n = nums.size();
        for(int i = n-1; i>=0; --i){
            rightsum.push_back(sum2);
            sum2+=nums[i];

        }
        reverse(rightsum.begin(),rightsum.end());
        for(int i = 0; i<n; ++i){
            final1.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return final1;
        
    }
};
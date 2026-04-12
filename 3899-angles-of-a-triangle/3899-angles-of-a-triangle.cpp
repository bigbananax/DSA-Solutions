class Solution {
public:
    vector<double> internalAngles(vector<int>& nums) {
        vector<double>ans;
        sort(nums.begin(),nums.end());
        double a = nums[0];
        double b = nums[1];
        double c=  nums[2];
        if(a+b<=c) return ans;
        double a1 = acos((b*b + c*c - a*a)/(2*b*c)); 
        double b1 = acos((a*a + c*c - b*b)/(2*a*c)); 
        double c1 = acos((b*b + a*a - c*c)/(2*a*b)); 
        double radToDeg = 180.0/M_PI;
        a1 = radToDeg*a1;
        b1 = radToDeg*b1;
        c1 = radToDeg*c1;
        ans.push_back(a1);
        ans.push_back(b1);
        ans.push_back(c1);
        sort(ans.begin(),ans.end());
        return ans;


        
    }
};
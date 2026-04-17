class Solution {
public:
    long reverseNumber(int num) {
    long reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}  
public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<long,int>mp;
        int distance = INT_MAX;
        for(int i = 0; i<nums.size(); ++i){
            long rn = reverseNumber(nums[i]);
            if(mp.count(nums[i])){
                distance = min(distance,i-mp[nums[i]]);
            }
            mp[rn] = i;
        }
        if(distance==INT_MAX) return -1;
        return distance;
        
    }
};
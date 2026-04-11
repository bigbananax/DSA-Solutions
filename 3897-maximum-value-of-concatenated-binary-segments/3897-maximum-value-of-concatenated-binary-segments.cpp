class Solution {
public:
   
    int maxValue(vector<int>& nums1, vector<int>& nums0) {
        vector<string>vec;
        int n = nums1.size();
        for( int i =0;i<n;i++){
            int a = nums1[i];
            int b = nums0[i];
            string ans ="";
            while( a--){
                ans+='1';
            }
            while( b--){
                ans+='0';
            }
            vec.push_back(ans);
        }
        sort(vec.begin(),vec.end(),[](string &a , string &b){
            return a+b > b+a;
        });
        string k="";
        for( auto val : vec){
            k+= val;
        }
        long long mod = (1e9 +7);
        long long ans=0;
        for( auto v : k){
             
            ans = (ans*2 + ( v  =='1'  ? 1 : 0 ))%mod;
        }
    return (int)ans;
    }
};
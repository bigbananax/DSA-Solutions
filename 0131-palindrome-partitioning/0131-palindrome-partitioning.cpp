class Solution {
public:
    int n;
    bool is(string &s, int l, int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
                break;
            }
            l++;
            r--;

        }
        return true;
    }
    void solve(string& s, int idx, vector<vector<string>>&ans, vector<string>&res){
        if(idx==n){
            ans.push_back(res);
            return; 

        }
        for(int i = idx; i<n; ++i){
            if(is(s,idx,i)){
                res.push_back(s.substr(idx, i-idx+1));
                solve(s,i+1,ans,res);
                res.pop_back();


            }
        }

    }
    vector<vector<string>> partition(string s) {
        n = s.size();
        vector<vector<string>>ans;
        vector<string>res;

        solve(s,0,ans,res);
        return ans;
        
    }
};
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>ans(n+1);
        vector<int>res(n);
        int count = 0;
        for(int i = 0; i<A.size(); ++i){
            ans[A[i]]++;
            if(ans[A[i]]==2) count++;
            ans[B[i]]++;
            if(ans[B[i]]==2) count++;
            res[i] = count;


        }
        return res;

        
    }
};
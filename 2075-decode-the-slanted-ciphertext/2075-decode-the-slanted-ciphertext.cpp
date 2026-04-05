class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n = encodedText.size();
        long long  cols  = n/rows;
        string ans;
        for(int i = 0; i<cols; ++i){
            int j = 0; int k = i;
            while(j<rows && k<cols){
                ans.push_back(encodedText[j*cols+k]);
                j++; k++;
            }
        }
        while(!ans.empty() && ans.back()==' '){
            ans.pop_back();
        }
        
        return ans;
        
    }
};
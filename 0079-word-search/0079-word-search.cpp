class Solution {
private: 
bool solve(int i , int j, vector<vector<char>>& board,int idx, string &word){
    int m = board.size();
    int n = board[0].size();
    if(idx==word.size()) return true;

    if(i<0 || i>=m || j<0 || j>=n || board[i][j]=='&') return false;

    if(board[i][j]!=word[idx]) return false;

    auto temp = board[i][j];
    board[i][j] = '&';

    bool ok = solve(i+1,j ,board, idx+1, word)||
    solve(i-1,j ,board,idx+1,word)||
    solve(i,j-1 ,board,idx+1,word)||
    solve(i,j+1 ,board,idx+1,word);

    board[i][j] = temp;

    return ok;
}
public:
    bool exist(vector<vector<char>>& board, string word) {

        int m = board.size(); 
        int n = board[0].size();


        for(int i = 0; i<m; ++i){
            for(int j = 0; j<n; ++j){
                if(board[i][j]==word[0] && solve(i,j,board,0,word)){
                    return true;
                }
            }
        }
        return false;
        
    }
};
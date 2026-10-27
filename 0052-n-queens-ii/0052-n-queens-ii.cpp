class Solution {
private:
    void solve(vector<string>&board, int row){
        if(row>=N){
            result.push_back(board);
            return;
        }
        for(int i = 0; i<N; ++i){
            int d = row+i;
            int a = row-i;

            if(cols.find(i)!=cols.end() || dia.find(d)!= dia.end() || antid.find(a)!=antid.end()){
                continue;
            }

            cols.insert(i);
            dia.insert(d);
            antid.insert(a);
            board[row][i] = 'Q';

            solve(board, row+1);

            cols.erase(i);
            dia.erase(d);
            antid.erase(a);
            board[row][i] = '.';

            


        }
    }
public:

    vector<vector<string>> result;  
    unordered_set<int>cols;
    unordered_set<int>dia;
    unordered_set<int>antid;
    int N;
    int totalNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        N=n;

        solve(board, 0);

        return result.size();
        
        
    }
        
    
};
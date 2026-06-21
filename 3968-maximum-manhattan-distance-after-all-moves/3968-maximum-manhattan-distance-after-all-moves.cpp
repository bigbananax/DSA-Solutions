class Solution {
public:
    int maxDistance(string moves) {
        int x = 0; 
        int y = 0; 
        int z = 0; 
        for(int i = 0; i<=moves.size(); ++i){
            if(moves[i]=='U'){
                x++;
            }
            else if(moves[i]=='D'){
                x--;
            }
            else if(moves[i]=='L'){
                y++;
            }
            else if(moves[i]=='R'){
                y--;
            }
            else if(moves[i]=='_'){
                z++;
            }
        }
        if(z<=0) return abs(x)+abs(y);
        return abs(x)+abs(y)+z;
        
    }
};
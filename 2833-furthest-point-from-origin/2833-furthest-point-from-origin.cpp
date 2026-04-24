class Solution {
public:
    int furthestDistanceFromOrigin(string moves) { 
        int ans = 0;
        int l = 0; 
        int r = 0;
        for(int i = 0; i<moves.size(); ++i){
            if(moves[i]=='L'){
                l++;
                r--;
            }
            else if (moves[i]=='R') {
                r++;
                l--;
            }
            else {
                r++;
                l++;
            }
        }
        return max(l,r);
        
    }
};
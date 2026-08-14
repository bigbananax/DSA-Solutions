class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int l = 1;
        int ans = 0;
        int n = colors.size(); 
        for(int i=1; i<=n+k-2; i++){ 
            if (colors[i%n]!= colors[(i-1+n)%n]){ 
                l++; 
            }else{ 
                l= 1; 
            }
            if (l>= k) ans++;
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();

        int xc = 0, yc = 0;

        while (true) {
            char move = grid[xc][yc];
            grid[xc][yc] = 'X';

            int x = xc, y = yc;

            if (move == 'L') {
                y--;
            } else if (move == 'R') {
                y++;
            } else if (move == 'U') {
                x--;
            } else if (move == 'D') {
                x++;
            }

            if (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == 'X') {
                break;
            }

            xc = x;
            yc = y;
        }

        return {xc, yc};
    }
};
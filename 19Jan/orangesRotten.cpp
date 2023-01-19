#include <bits/stdc++.h>
using namespace std;

#define ll            long long

class Solution {
public:
    int orangesRotting(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        int t[n][m];
        memset(t, -1, sizeof(t));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 2) {
                    q.push({i, j});
                    t[i][j] = 0;
                }
            }
        }

        int maxt = 0;
        int dx[] = {0, 0, -1, 1};
        int dy[] = {1, -1, 0, 0};
        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int i = 0; i < 4; ++i) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == 1) {
                    q.push({nx, ny});
                    grid[nx][ny] = 2;
                    t[nx][ny] = t[x][y] + 1;
                    maxt = max(maxt, t[nx][ny]);
                }
            }
        }
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                if(grid[i][j] == 1) return -1;
            }
        }
        return maxt;
    }
};

int main() {
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int n, m;

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !vis[x][y]);
}

void dfs(int si,int sj){
    // cout << si << " " << sj << endl;
    vis[si][sj] = true;

    for (int i = 0; i <4; i++)
    {
        int ci,cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;
         if(valid(ci,cj) && !vis[ci][cj]){
            dfs(ci,cj);
         }
    }
    
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    int apartmentCount = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                dfs(i, j); 
                apartmentCount++;
            }
        }
    }

    cout << apartmentCount << endl;

    return 0;
}
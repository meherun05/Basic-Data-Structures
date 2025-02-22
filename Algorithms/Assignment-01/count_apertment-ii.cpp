#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int n, m;

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !vis[x][y]);
}

int dfs(int si,int sj){
    // cout << si << " " << sj << endl;
    vis[si][sj] = true;
    int roomCount = 1;

    for (int i = 0; i <4; i++)
    {
        int ci,cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;
         if(valid(ci,cj) && !vis[ci][cj]){
           roomCount += dfs(ci,cj);
         }
    }
    return roomCount;
    
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    vector<int> ap;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                int r = dfs(i, j); 
                ap.push_back(r);
            }
        }
    }
    sort(ap.begin(),ap.end());

    if(ap.empty()){
        cout << 0 << endl;
    }else{
        for(int x : ap){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
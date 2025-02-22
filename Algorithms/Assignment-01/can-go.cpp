#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int level[105][105];
int n, m;

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty()) {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        // cout << par_i << " " << par_j << endl;

        for (int i = 0; i < 4; i++) {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#') {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    pair<int, int> start, end;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                start = {i, j};
            } else if (grid[i][j] == 'B') {
                end = {i, j};
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    bfs(start.first, start.second);

    if (level[end.first][end.second] != -1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
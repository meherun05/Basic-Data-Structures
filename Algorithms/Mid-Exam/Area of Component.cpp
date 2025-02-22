#include <bits/stdc++.h>

using namespace std;
int n,m,mn;
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
char grid[1005][1005];


 bool valid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
}

int dfs(int si,int sj){
    vis[si][sj] = true;
    int count = 1;
    for(int i = 0; i < 4;i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == '.'){
            count +=dfs(ci,cj);
        }
    }
    return count;
}

int main()
{
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        for(int j =0; j < m;j++){
            cin >> grid[i][j];
        }
    }
    mn = INT_MAX;
    memset(vis,false,sizeof(vis));
    
    for(int i = 0;i < n;i++){
        for(int j =0; j < m;j++){
            if(!vis[i][j] && grid[i][j] == '.')
            { mn = min(mn,dfs(i,j));
            }
        }
    }
    cout << ((mn == INT_MAX) ? -1 : mn);

    return 0;
}

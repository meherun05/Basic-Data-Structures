 #include <bits/stdc++.h>

using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
int n,m;
vector<pair<int,int>> d = {{0,-1},{0,1},{-1,0},{1,0}};
bool valid(int i, int j){
    if(i < 0 || i >=n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si,int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj]= 0;
    while(!q.empty()){
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == '.'){
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
        
    }
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid[i][j] == '.')
                bfs(i,j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << level[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
 #include <bits/stdc++.h>

using namespace std;
vector<int> grid[1005][1005];
class Solution {
public:
    int m,n,count;
    bool vis[105][105];
    vector<pair<int,int>> d = {{0,-1},{0,1},{-1,0},{1,0}};
    bool valid(int i,int j){
        if(i >= n || i < 0 || j < 0 || j >= m){
            return false;
        }
        return true;
    }
    
    void dfs(int si,int sj, vector<vector<int>>& grid){
        vis[si][sj] = true;
        for(int i = 0; i < 4; i++){
            int ci,cj;
            ci = si + d[i].first;
            cj = sj + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == 1){
                dfs(ci,cj,grid);
            }
            else if((valid(ci,cj) && grid[ci][cj] == 0) || !valid(ci,cj)){
                count++;
            }
        }
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        count = 0; 
        n = grid.size();
        m = grid[0].size();
        for(int i = 0; i < n;i++){
            for(int j = 0; j< m;j++){
                if(!vis[i][j] && grid[i][j] ==1)
                    dfs(i,j,grid);
            }
        }
        return count;    
    }
};
int main(){
    int n,m;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            /* code */
        }
        
    }
    
    return 0;
}
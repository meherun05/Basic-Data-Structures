 #include <bits/stdc++.h>

using namespace std;
vector<int> adj_list[105];
int parent[105];
bool vis[105];
bool cycle;

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()){
        int par = q.front();
        q.pop();

        // cout << par << " " ;
        for(int child : adj_list[par]){
            if(vis[child] && parent[par] != child){
                cycle = true;
            }
            if(!vis[child]){
                q.push(child);
                parent[child] = par;
                vis[child] = true;
            }
        }
    }
    
}

int main(){
    int n,e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if(!vis[i]){
            bfs(i);
        }
    }
    if(cycle)
        cout << "Cycle detected";
    else
        cout << "Cycle not detected";
    
    return 0;
}
 #include <bits/stdc++.h>

using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
int parent[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int par = q.front();
        q.pop();
        
        // cout << par << " ";

        for(int child : adj_list[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] +1;
                parent[child] = par;
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
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));
    int q,i= 0;
    cin >> q;
    while(q--){

    int src,dst;
    cin >> src >> dst;
    bfs(src);

    int node = dst;
    vector<int>path;
    while(node != -1){
        // cout << node << " ";
        path.push_back(node);
        i++;
        node = parent[node];
    }
    reverse(path.begin(),path.end());
    // for(int x : path){
    //     cout << x << " ";
    // }
    // cout << i << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " parent -> " << parent[i] << endl;
    }
    
    return 0;
}
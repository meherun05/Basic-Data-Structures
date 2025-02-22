// Question: You will be given an undirected graph which will be connected as input.
// Then you will be given a level L.
// You need to print the node values at level L in descending order. The source will be 0 always. 

 #include <bits/stdc++.h>

using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];

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
    int q;
    cin >> q;
    while(q--){
        int src, dst;
        cin >> src >> dst;
        bfs(src);
        for (int i = 0; i < n; i++)
        {
            if(level[i] == dst){
                cout << i << " -> " << level[i] << endl;
            }
        }
    }
    
    // cout << level[dst] << endl;
    return 0;
}
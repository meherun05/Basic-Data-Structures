 #include <bits/stdc++.h>

using namespace std;

int main(){
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int q;
    cin >> q;
    while(q--){
        int v;
        cin >> v;
        sort(adj_list[v].begin(), adj_list[v].end(), greater<int>());

        if (adj_list[v].empty()) {
            cout << "-1\n";
        } else {
            sort(adj_list[v].begin(), adj_list[v].end(), greater<int>()); 
            for (int x : adj_list[v]) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    
    

    return 0;
}
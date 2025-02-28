 #include <bits/stdc++.h>

using namespace std;

int main(){
    int n,e;
    cin >> n >> e;
    vector<pair<int,int>> adj_list[n];
    while(e--){
        int a,b,c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }

    for (int i = 0; i < n; i++)
    {
      cout << i << " -> "  ;
        for(auto x : adj_list[i]){
            int f = x.first;
            int s = x.second;
            cout << "{" << f << ", " << s  << "}, ";
        }
        cout << endl;
    }
    

    return 0;
}
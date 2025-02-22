#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj(n);

    while(e--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    int q;
    cin >> q;

    while (q--) {
        int src, dst;
        cin >> src >> dst;

        if (src == dst) {
            cout << "YES\n";
            continue;
        }

        bool found = false;
        for (int x : adj[src]) {
            if (x == dst) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
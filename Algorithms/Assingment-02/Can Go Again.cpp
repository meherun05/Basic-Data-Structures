#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int a, b, c;

    Edge(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

vector<Edge> edge_list;
long long dis[1005];
int n, e, src;
bool cycle;

void bellmanFord() {
    dis[src] = 0;
    cycle = false;

    for (int i = 0; i < n - 1; i++) {
        for (auto ed : edge_list) {
            int a = ed.a, b = ed.b, c = ed.c;
            if (dis[a] != INT_MAX && dis[a] + c < dis[b]) {
                dis[b] = dis[a] + c;
            }
        }
    }

    for (auto ed : edge_list) {
        int a = ed.a, b = ed.b, c = ed.c;
        if (dis[a] != INT_MAX && dis[a] + c < dis[b]) {
            cycle = true;
            return;
        }
    }
}

int main() {
    cin >> n >> e;

    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a - 1, b - 1, c));
    }

    for (int i = 0; i < n; i++) {
        dis[i] = INT_MAX;
    }

    cin >> src;
    src--;

    bellmanFord();

    int q;
    cin >> q;
    if(cycle){
        cout << "Negative Cycle Detected\n";\
    }else{
         while (q--) {
        int d;
        cin >> d;
        d--;
        
        if (dis[d] == INT_MAX) {
            cout << "Not Possible\n";
        } else {
            cout << dis[d] << endl;
        }
        } 
    }
   

    return 0;
}

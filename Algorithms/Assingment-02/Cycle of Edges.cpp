#include <bits/stdc++.h>
using namespace std;

int par[1000005];
int group_size[1000005];

int find(int node) {
    if(par[node] == -1) {
        return node;
    }
    return par[node] = find(par[node]);
}

void union_sets(int node1, int node2) {
    int leader1 = find(node1);
    int leader2 = find(node2);
    
    if(leader1 == leader2) {
        return;
    }
    
    if(group_size[leader1] > group_size[leader2]) {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    } else {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main() {
    memset(par, -1, sizeof(par));
    
    memset(group_size, 1, sizeof(group_size));
    
    int n, e;
    int count = 0;
    
    cin >> n >> e;
    
    for(int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        
        if(find(a) == find(b)) {
            count++;
        } else {
            union_sets(a, b);
        }
    }
    
    cout << count << endl;
    
    return 0;
}
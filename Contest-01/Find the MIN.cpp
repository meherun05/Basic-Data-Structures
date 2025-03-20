#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int q;
    cin >> q;
    priority_queue<int,vector<int>,greater<int>> p;
    while(q--) {
        long long int a, b;
        cin >> a;
        if(a == 1) {
            cin >> b;
            p.push(b);
        } else {
            if(p.empty()) {
                cout << "empty\n";
                continue;
            }
           long long minVal = p.top();
            cout << minVal << "\n";
            
           while(!p.empty() && p.top() == minVal) {
                p.pop();
            }
        }
    }

    return 0;
}
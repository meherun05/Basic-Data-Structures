 #include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
     priority_queue<long long,vector<long long>,greater<long long>> p;
    while(q--){
        long long val;
        cin >> val;
        p.push(val);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 0) {
            long long v;
            cin >> v;
            p.push(v);
            cout << p.top() << endl;
        } else if (x == 1) {
            if (!p.empty()) {
                cout << p.top() << endl;
            } else {
                cout << "Empty" << endl;
            }
        } else if (x == 2) {
            if (!p.empty()) {
                p.pop();
            }
            if (!p.empty()) {
                cout << p.top() << endl;
            } else {
                cout << "Empty" << endl;
            }
        }
    }
     

    return 0;
}
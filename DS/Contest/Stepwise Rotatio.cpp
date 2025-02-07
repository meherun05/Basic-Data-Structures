 #include <bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    while(x--){
        int e = v[0];  
        v.erase(v.begin());  
        v.push_back(e);
    }
    
    vector<pair<int, int>> queries;  // Store the queries
    for (int i = 0; i < t; i++) {
        int l, r;
        cin >> l >> r;
        queries.push_back({l, r});
    }

    for (auto [l, r] : queries) {
        int sumL = 0, sumR = 0;

        for (int i = l; i < r; i++) {  // Use zero-based indexing
            sumL += v[i];
        }
        for (int i = l; i < r; i++) {
            sumR += v[i];
        }

        cout << sumL << endl << sumR << endl;
    }

    return 0;
}
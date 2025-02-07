 #include <bits/stdc++.h>

using namespace std;

int main(){
    // pair<string,int> p;
    // // p = make_pair("Shahin",1);
    // p = {"Shahin",1};
    // cout << p.first << endl;
    // cout << p.second << endl;

    int n;
    cin >> n;
    vector<pair<string,int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second ;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl ;
    }
    

    return 0;
}
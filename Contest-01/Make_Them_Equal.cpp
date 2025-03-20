#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        int n,k;
        cin >> n >> k;
        cin >> s1 >> s2;
        
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if(s1[i] != s2[i]) x++;
        }
        
        if(x <= k) cout <<"YES\n";
        else cout << "NO\n";
        
    }

    return 0;
}
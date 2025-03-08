#include <bits/stdc++.h>
using namespace std;

bool reachValue(long long int cur,long long int n){
    if(cur == n){
        return true;
    }
    if(cur > n){
        return false;
    }
    return reachValue(cur * 10,n) || reachValue(cur * 20,n);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        if(reachValue(1,n)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }


    return 0;
}
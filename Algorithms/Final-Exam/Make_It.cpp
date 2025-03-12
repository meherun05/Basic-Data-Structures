#include <bits/stdc++.h>
using namespace std;

bool visited[100005];

bool makeIt(long long int current,long long int n){
    if(current == n){
        return true;
    }
    if(current > n ){
        return false;
    }
    if(visited[current]) return false;
    visited[current] = true;
    return makeIt(current+3,n) || makeIt(current*2,n);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        memset(visited,false,sizeof(visited));
        if(makeIt(1,n)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
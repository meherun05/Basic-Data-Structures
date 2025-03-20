#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    map<char,int> m;
    while(n--){
        getline(cin,s);
        stringstream ss(s);
        string word;
        while(ss >> word){
            cout << word << " ";
        }
    }

    return 0;
}
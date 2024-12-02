 #include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    string sub = "EGYPT";

    int n = s.find(sub);
    s.replace(n,1," ");
    s.erase(n,5);
    cout << s;
    return 0;
}
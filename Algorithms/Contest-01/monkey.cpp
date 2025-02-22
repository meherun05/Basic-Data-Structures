 #include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    s.erase();

    while(getline(cin,s)){
        sort(s.begin(), s.end());
        cout << s << endl;
    } 
    
    return 0;
}
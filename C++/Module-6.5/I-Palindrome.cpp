 #include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string s1 = s;
    reverse(s1.begin(),s1.end());
    if(s == s1){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
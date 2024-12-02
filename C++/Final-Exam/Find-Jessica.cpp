 #include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss >> word){
        if(word == "Jessica"){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }

    return 0;
}
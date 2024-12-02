 #include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s,s2;
    cin >> n;
    while(n--){
       getline(cin,s);
       getline(cin,s2);

    int len = min(s.size() ,s2.size());
    for (int i = 0; i <= len; i++)
    {  if(s[i] == ' '){
        s[i] = '-';
    }
        cout<< s[i] << s2[i];
    }
    cout << endl;
    }
    

    return 0;
}
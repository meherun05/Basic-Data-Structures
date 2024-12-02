 #include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    for (int i = 0; i < t; i++)
    {
        getline(cin,s);
        int left = s[0] + s[1]+s[3];
        cout << left << endl;
    }
    

    return 0;
}
 #include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin,str[i]);
        cout << str[i] << endl;
    }
    

    return 0;
}
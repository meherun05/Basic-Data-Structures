#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int f[26] = {0};

    for (int i = 0; i < str.size(); i++)
    {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            int idx = c -'a';
            f[idx] = 1;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(f[i] != 0)
            cout << (char)(i + 'a');
    }
    
    


    return 0;
}
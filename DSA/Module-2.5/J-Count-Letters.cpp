 #include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    vector<int> f(26); f = {0};
    for (char c : str){
        int index = c - 'a';
        f[index]+=1;
    }
    for (int i = 0; i < 26; i++)
    {
        if(f[i] != 0){
         cout << (char)(i + 'a') << " : " << f[i] << endl;
        }
    }
    
    
    return 0;
}
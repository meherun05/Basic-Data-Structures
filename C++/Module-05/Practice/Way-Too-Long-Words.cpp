 #include <bits/stdc++.h>

using namespace std;

void fun(string str){
    int len = str.size();
    if(len > 10){
        cout << str[0] << (len -2) << str[len-1];
    }
}

int main(){
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        fun(s);
    }
    

    return 0;
}
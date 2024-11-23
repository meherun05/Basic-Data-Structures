 #include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    char s,q;
    cin >> a >> s >> b >> q >> c;
    long long sum = (a + b);
    long long minus = (a- b);
    long long multi = (a * b);
    if(s == '+'){
        if(sum == c){
            cout << "Yes";
        }else{
            cout << sum;
        }
    }else if(s == '-'){
        if(minus == c){
            cout << "Yes";
        }else{
            cout << minus;
        }
    }else if(s == '*'){
        if(multi == c){
            cout << "Yes";
        }else{
            cout << multi;
        }
    }

    return 0;
}
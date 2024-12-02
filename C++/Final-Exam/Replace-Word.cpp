 #include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    string s,x;
    for (int i = 0; i < t; i++)
    {
        cin >> s >> x;
        for (auto st = s.begin(),xt = x.begin(); st < s.end(); st++,xt++)
        {
            if(*st == *xt){
                *st = #;
                break;
            }
        }
    }


    return 0;
}
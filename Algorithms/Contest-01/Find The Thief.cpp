 #include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    map<int,int> a;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int code;
            cin >> code;
            a[code]++;
        }
        for (auto thief : a) {
            if (thief.second % 2 != 0) { 
                cout << thief.first << endl;
                break; 
            }
        }

    }

    return 0;
}
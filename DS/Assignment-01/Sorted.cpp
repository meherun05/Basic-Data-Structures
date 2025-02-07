 #include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    cin >> t;
   while(t--){
    cin >> n;
    vector<int> a(n);
    vector<int> f(n);
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[i] = a[i];
    }
    sort(f.begin(),f.end());
    for (int i = 0; i < n; i++)
    {
        if(f[i] != a[i]){
            flag = 0;
        }
    }
    if(flag == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
   }
    

    return 0;
}
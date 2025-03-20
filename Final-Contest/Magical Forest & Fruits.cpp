#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<long long > pre_sum(n+1);
    pre_sum[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        pre_sum[i] = pre_sum[i-1]+a[i];
    }

    while (q--)
    {
        int l,r;
        cin >> l >> r;
        int long long sum = 0;
        if(l == 1){
            sum = pre_sum[r];
        }else{
            sum = pre_sum[r] - pre_sum[l-1];
        }
        cout << sum << endl;
    }
    
    

    return 0;
}
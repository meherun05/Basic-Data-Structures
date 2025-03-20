#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,q;
    cin >> n >> q;
    vector<long long int> a(n);
    long long int val = 1;
    for (int i = 0; i < n; i++)
    {
        a[i] = val;
        if ((i + 1) % 3 == 0) {
            val++;
        }
    }
    vector<long long > pre_sum(n+1);
    for (int i = 1; i <= n; i++)
    {
        pre_sum[i] = pre_sum[i-1]+a[i-1];
    }

    while (q--)
    {
        int l,r;
        cin >> l >> r;
        long long sum = 0;
        if(l == 1){
            sum = pre_sum[r];
        }else{
            sum = pre_sum[r] - pre_sum[l-1];
        }
        cout << sum << endl;
    }
    
    

    return 0;
}
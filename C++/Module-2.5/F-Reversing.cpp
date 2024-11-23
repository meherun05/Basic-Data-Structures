 #include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // cout << swap(a[i]);
    }
    int b[n];
    for (int i = 0,j = n-1; i < n; i++,j--)
    {
        b[i] = a[j];
    }

    for (int i = 0; i < n; i++)
    {
        swap(a[i],b[i]);
       cout  << a[i] << " ";
    }
    
    
    
    
    return 0;
}
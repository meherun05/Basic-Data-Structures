 #include <bits/stdc++.h>

using namespace std;
long long* sort_it(int n){
    long long *x = new long long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x,x+n,greater<int>());
    return x;
    
}

int main(){
    int n;
    cin >> n;
    long long *a = sort_it(n);

    for (int i = 0; i < n; i++)
    {
       cout << a[i] << " ";
    }
    
    return 0;
}

//  #include <bits/stdc++.h>

// using namespace std;
// long long* sort_it(int n){
//     long long *x = new long long[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x[i];
//     }
//     for (int i = 0, j = i +1; i < n; j++,i++)
//     {
//         if(x[i] < x[j]){
//         long long temp = x[i];
//         x[i] = x[j];
//         x[j] = temp;
//         }
//     }
//     return x;
    
// }

// int main(){
//     int n;
//     cin >> n;
//     long long *a = sort_it(n);

//     for (int i = 0; i < n; i++)
//     {
//        cout << a[i] << " ";
//     }
    
//     return 0;
// }
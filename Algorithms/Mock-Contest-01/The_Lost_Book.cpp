#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long int> books(n);
    for (int i = 0; i < n; i++)
    {
        cin >> books[i];
    }
    long long int search;
    cin >> search;

    bool flag = false;
   for (int i = 0; i < n; i++)
   {
    if(books[i] == search){
        cout << i << endl;
        flag = true;
    }
   }
   if(!flag){
    cout << -1 << endl;
   }
   

    return 0;
}
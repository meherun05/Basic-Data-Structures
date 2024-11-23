 #include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int a;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(max < a){
            max = a;
        }
    }
       cout << max;
    
    
    return 0;
}
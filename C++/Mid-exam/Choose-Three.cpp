 #include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
   
   for (int f = 0; f < t; f++)
   {
        int n,s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
           cin >> a[i];
        }
         int flag = 0;
        if (n < 3) {
            cout << "NO" << endl;
            continue;
        } 
        
        for (int i = 0; i < n-2; i++)
        {
            for (int j = i + 1; j < n-1; j++)
            {
               for (int k = j + 1; k < n; k++)
               {
                    if(a[i] + a[j] + a[k] == s){
                        flag = 1;
                        // cout << a[i]  << " + " << a[j]  <<  " + " << a[k]  << endl;
                        break;
                    }
                    if(flag == 1){break;}
               }
               if(flag == 1){break;}
               
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
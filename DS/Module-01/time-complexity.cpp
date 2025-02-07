 #include <bits/stdc++.h>

using namespace std;

int main(){
    // why need this time complexity if i want to sum n number i do this
    int n;
    cin >> n;
    int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum +=i;
    // }

    sum = (n*(n+1)/2); // but this do the same as i did with loop but this optimize the code
    cout << sum;
    


    return 0;
}
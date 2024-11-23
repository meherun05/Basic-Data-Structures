#include<bits/stdc++.h>

using namespace std;
int main(){
    long long x,y;
    cin >> x >> y;
    long long sum = x + y;
    long long multi = x * y;
    long long minus = x -y;
    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << multi << endl;
    cout << x << " - " << y << " = " << minus << endl;
    return 0;
}



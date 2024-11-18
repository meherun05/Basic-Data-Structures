#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    // if(x < y){
    //     cout << x;
    // }else{
    //     cout << y;
    // }
    cout << min(x,y) << endl;
    // cout << min({x,y,100,2,400}) << endl;
    cout << max (x,y);

     swap(x,y);
    cout << x << y;
    return 0;
}
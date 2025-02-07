 #include <bits/stdc++.h>

using namespace std;

int main(){
    // priority_queue<int> p; // max
    priority_queue<int,vector<int>,greater<int>> p; // min
    p.push(5);
    p.push(15);
    p.push(35);
    cout << p.top();

    return 0;
}
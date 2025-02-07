 #include <bits/stdc++.h>

using namespace std;

int main(){
     int n;
    queue<int> q;
    stack<int> q2;
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while(!q.empty()){
        q2.push(q.front());
        q.pop();
    }

    while(!q2.empty()){
       cout << q2.top() << " ";
        q2.pop();
    }
    return 0;
}
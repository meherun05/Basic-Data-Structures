 #include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin >> n >> m;
    stack<int>st;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    int flag = 1;

    while(!st.empty() && !q.empty()){
        if(n != m){
            flag = 0;
            break;
        }
        if(st.top() != q.front()){
            flag = 0;
            break;
        }
        st.pop();
        q.pop();
    }
    
    if(flag == 1){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
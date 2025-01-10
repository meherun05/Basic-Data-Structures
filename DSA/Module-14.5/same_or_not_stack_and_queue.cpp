 #include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int> st;
    queue<int> q;
    int m,n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
       int x;
       cin >> x;
       st.push(x);
    }

    cin >> m;
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
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
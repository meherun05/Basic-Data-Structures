 #include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    stack<int> st,st2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    st2 = st;

    stack<int> temp;
    while(!st2.empty()){
        temp.push(st2.top());
        st2.pop();
    }
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }

    return 0;
}
 #include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    stack<int> s,s1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }
    int flag = 1;

    while(!s.empty() && !s1.empty()){
        if(s != s1){
            flag = 0;
            break;
        }
        s.pop();
        s1.pop();
    }
    
    if(flag == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
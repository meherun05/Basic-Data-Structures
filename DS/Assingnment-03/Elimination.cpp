 #include <bits/stdc++.h>

using namespace std;

bool elimination(string s){
    stack<char> st;
    for(char c : s){
        if(c == '1'){
            if(!st.empty() && st.top() == '0'){
                st.pop();
            }else{
                st.push(c);
            }
        }else{
            st.push(c);
        }
    }
    return st.empty();
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        if(elimination(str)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

void insert_any_post(stack<string>& s, int idx, string val) {
    if (idx < 0 || idx > s.size()) {
        cout << "Invalid" << endl;
        return;
    }
    
    stack<string> temp;
    int sz = s.size();  

    for (int i = 0; i < sz - idx; i++) {
        temp.push(s.top());
        s.pop();
    }

    s.push(val);

    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }
}

void delete_any_post(stack<string>& s, int idx) {
    if (idx < 0 || idx >= s.size()) {
        cout << "Invalid" << endl;
        return;
    }

    stack<string> temp;
    int sz = s.size();  

    for (int i = 0; i < sz - idx - 1; i++) {
        temp.push(s.top());
        s.pop();
    }

    if (!s.empty()) {
        s.pop();
    }

    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }
}

void printStack(stack<string> st) {
    if (st.empty()) {
        cout << "EMPTY" << endl;
        return;
    }

    vector<string> v;
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }

    reverse(v.begin(), v.end());
    for (const string& str : v) {  
        cout << str << " ";
    }
    cout << endl;
}

int main() {
    stack<string> st;
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "ADD") {
            int pos;
            string val;
            cin >> pos >> val;
            insert_any_post(st, pos, val);
        } else if (s == "DELETE") {
            int pos;
            cin >> pos;
            delete_any_post(st, pos);
        } else if (s == "PRINT") {
            printStack(st);
        }
    }
    return 0;
}

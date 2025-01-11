 #include <bits/stdc++.h>

using namespace std;

void specialQueries(int n,string s){
   
}

int main(){
    int n;
    cin >> n;
    queue<string> q;
    while(n--){
        int x;
        cin >> x;
        if(x == 0){
            string s;
            cin >> s;
            q.push(s);
        }else if(x == 1){
            if(!q.empty()){
                cout << q.front() << endl;
                q.pop();
            }else{
                cout << "Invalid";
            }
        }
    }

    return 0;
}
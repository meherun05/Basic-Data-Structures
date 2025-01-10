 #include <bits/stdc++.h>

using namespace std;

int main(){
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        cout << "val : " << q.front() << " size: ";
        q.pop();
        cout << q.size() << endl;
    }
    
    

    return 0;
}
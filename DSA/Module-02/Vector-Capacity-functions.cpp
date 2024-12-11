 #include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    // cout << v.capacity() << endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // cout << v.size() << endl;
    // v.clear();
    // cout << v.size() << endl;
    //  cout << v[0] << endl;
    //  v.push_back(100);
    //  cout << v[0];
    v.resize(2);
      cout << v[0] << endl;
    return 0;
}
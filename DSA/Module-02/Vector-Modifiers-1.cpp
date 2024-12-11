 #include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int> v2 = {100,200,300};
    // vector<int> v2 = v; // assing modifiers we can use v.assign(v2);
    // v2.pop_back();
    // v.insert(v.begin(),10);
    // v.insert(v.begin(),v2.begin(),v2.end());
    v.erase(v.begin()+1,v.end()-1);
    for(int x : v){
        cout << x << " ";
    }

    return 0;
}
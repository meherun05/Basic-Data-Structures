 #include <bits/stdc++.h>

using namespace std;

int main(){
    list<int> l = {1,2,3,4,5};
    list<int> l2 = {10,200,300};
    // l.push_back(10);
    // l.push_front(100);
    // cout << *next(l.begin(),2);

    l.insert(next(l.begin(),2),l2.begin(),l2.end());

    for(int val : l){
        cout << val << endl;
    }

    return 0;
}
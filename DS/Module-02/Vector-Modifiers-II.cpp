 #include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v = {1,2,3,2,5,2};
    // replace(v.begin(),v.end(),2,50);
    // vector<int> :: iterator it = find(v.begin(),v.end(),10);
    auto it = find(v.begin(),v.end(),5);
   if(it == v.end()){
    cout << "Not Found" << " " << *it;
   }else{
    cout << "Found" << " " << *it;
   }

    return 0;
}
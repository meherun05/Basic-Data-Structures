/*
Problem Statement : 
Here comes the genie with  bags. The -th bag contains  balls of color . 
Your goal is to collect as many balls as possible. However, 
the genie has a condition: the number of balls you take from each color must be distinct. 
More formally, if you take  balls of color  where , then you cannot take  balls of another color .
For example, suppose  and .
You can take  or . However, you cannot take  or , as these sets violate the condition of having distinct elements.
It's acceptable to take  balls from multiple bags. For instance,  or  are valid.
Now, you ask yourself: What is the maximum number of balls that you can collect?
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long int> val(n);
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    sort(val.begin(),val.end());
    auto it = unique(val.begin(),val.end());
    val.erase(it,val.end());

    long long int sum = 0;
    for (auto i : val)
        sum += i;
    cout << sum ;
    return 0;
}
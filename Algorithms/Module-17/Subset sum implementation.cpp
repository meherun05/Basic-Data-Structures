#include <bits/stdc++.h>
using namespace std;
int val[1005];

bool subsetSum(int i,int sum){
    if(i < 0){
        if(sum == 0) return true;
        else return false;
    }
    if(val[i] <= sum){
        bool op1 = subsetSum(i-1,sum-val[i]);
        bool op2 = subsetSum(i-1,sum);
        return op1 || op2;
    }else{
        return subsetSum(i-1,sum);
    }
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    int sum ;
    cin >> sum;
    if(subsetSum(n-1,sum)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    

    return 0;
}
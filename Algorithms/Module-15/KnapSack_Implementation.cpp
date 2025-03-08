#include <bits/stdc++.h>
using namespace std;
int val[1005],weight[1005];


int knapsack(int i,int mxWeight){
    if(i < 0 || mxWeight  <= 0)
        return 0;
    if(weight[i] <= mxWeight){
        int op1 = knapsack(i -1,mxWeight - weight[i] + val[i]);
        int op2 = knapsack(i - 1,mxWeight);
        return max(op1,op2);
    }else{
        return knapsack(i - 1,mxWeight);
    }
}

int main(){
    int n;
    cin >> n;
    int mxWeight;
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    cin >> mxWeight;

    cout << knapsack(n-1) << endl;
    

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int val[1005],weight[1005];
int dp[1005][1005];


int knapsack(int i,int mxWeight){
    if(i < 0 || mxWeight  <= 0)
        return 0;
        if(dp[i][mxWeight] != -1){
            return dp[i][mxWeight];
        }

    if(weight[i] <= mxWeight){
        int op1 = knapsack(i - 1, mxWeight - weight[i]) + val[i];
        int op2 = knapsack(i - 1,mxWeight);
        dp[i][mxWeight] = max(op1,op2);
        return dp[i][mxWeight];
    }else{
        dp[i][mxWeight] = knapsack(i - 1,mxWeight);
        return dp[i][mxWeight];
    }
}

int main(){
    int n,mxWeight;
    cin >> n >> mxWeight;
    
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
        cin >> val[i];
    }
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= mxWeight; j++) {
            dp[i][j] = -1;
        }
    }


    cout << knapsack(n-1,mxWeight) << endl;
    

    return 0;
}
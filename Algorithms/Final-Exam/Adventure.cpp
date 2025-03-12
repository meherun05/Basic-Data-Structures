#include <bits/stdc++.h>
using namespace std;
int val[1005],weight[1005];
int dp[1005][1005];

int knapSack(int i,int mxWeight){
    if(i < 0 || mxWeight  <= 0)
        return 0;
    if(dp[i][mxWeight] != -1){
        return dp[i][mxWeight];
    }

    if(weight[i] <= mxWeight){
        int op1 = knapSack(i - 1, mxWeight - weight[i]) + val[i];
        int op2 = knapSack(i - 1,mxWeight);
        dp[i][mxWeight] = max(op1,op2);
        return dp[i][mxWeight];
    }else{
        dp[i][mxWeight] = knapSack(i - 1,mxWeight);
        return dp[i][mxWeight];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,maxWeight;
        cin >> n >> maxWeight;
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            cin >> val[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0;j <= maxWeight;j++)
            {
                dp[i][j] = -1;
            }
            
        }
        cout << knapSack(n-1,maxWeight) << endl;
        
        
    }

    return 0;
}
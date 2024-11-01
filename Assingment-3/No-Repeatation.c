#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n],ctr=0;
    int f[100005] = {0};
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
       f[a[i]]++;
    }
    for (int i = 0; i < n; i++) 
    {
        if (f[a[i]] == 1)
        {
           ctr++;
        }
        
    }
    printf("%d",ctr);
    
    return 0;
}

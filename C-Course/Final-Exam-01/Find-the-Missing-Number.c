#include<stdio.h>

int main(){
    int n,a,b,c;
    long long m;
    scanf("%d",&n);
    long long result = 1;

    for (int i = 0; i < n; i++)
    {
       scanf("%lld %d %d %d",&m, &a,&b,&c);
        long long multi = a * b * c;
        result = m / multi;
        printf("%lld\n",result);
    }
    
    
    return 0;
}
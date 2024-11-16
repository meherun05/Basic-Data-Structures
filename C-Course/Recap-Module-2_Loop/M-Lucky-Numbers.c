#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i = a; i <= b; i++)
    {
        int nsum = i+3;
        if(i == 4 || i ==7){

        printf("%d ",i);
        }
    }
    
    return 0;
}
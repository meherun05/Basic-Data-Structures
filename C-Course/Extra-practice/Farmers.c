#include<stdio.h>

void fun(int x, int y, int z){
    int result1 = ((x * z) / (x + y));
    int result = z - result1;
    printf("%d\n",result);

}

int main(){
    int t,m1,m2,d;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d",&m1, &m2,&d);
        fun(m1,m2,d);
    }
    
    return 0;
}
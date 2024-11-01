#include<stdio.h>

int main(){
    // int n = 10;
    // int *a = &n;
    // int y = 20;
    // *a = y++;
    // n++;
    // printf("%d",n);

    // int x = 100;
    // int *p = &x;
    // printf("%d %d",*p,&x);

    // int a[4] = {1,2,3,4};
    // int *p;
    // printf("%d %d\n",p, a +2);
    // p = a+2;
    // printf("%d\n",*p);
    // p++;
    // printf("%d\n",&a[3]);
    // *p = 100;
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d ",a[i]);
    // }

    // int a[5] = {1,2,3,4,5};
    // // int *x = &a;
    // printf("%d",*a);

    int x,y,z;
    x = 10, y = 20, z = 30;
    int *p, *q;
    p = &x;
    printf("%d %d\n",p,&x);
    q = &y;
    printf("%d %d\n",q,&y);
    *p = 40;
    printf("%d\n ",*p);
    x = 50;
    q = p;
    printf("%d %d\n",q,p);
    printf("%d",*q);
    
    
    return 0;
}
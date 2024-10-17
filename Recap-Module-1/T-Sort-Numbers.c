#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a <= b && b <= c){
        // a is min
        if( b <= c){
            //b is min
            printf("%d\n%d\n%d\n",a,b,c);
        }else{
            //b is min
            printf("%d\n%d\n%d\n",a,c,b);
        }
    }else if(b <= a && b <= c){
        // b is min
        if(a <= c){
            //c is max
            printf("%d\n%d\n%d\n",b,a,c);
        }else{
            //a is max
            printf("%d\n%d\n%d\n",b,c,a);
        }
    }else{
        //c is min
        if(a <= b){
            // B IS MAX
            printf("%d\n%d\n%d\n",c,a,b);
        }else{
            printf("%d\n%d\n%d\n",c,b,a);
        }
    }
     printf("\n");
     printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}
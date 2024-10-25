#include<stdio.h>
#include<string.h>

int main(){
    char a[20000],b[20000],c[20000];
    scanf("%s %s %s",a,b,c);

    // int com_a = strcmp(a,b);
    // int com_b = strcmp(b,c);
    // int com_c = strcmp(c,a);
    
    // min letter
    // if(com_a <= com_b){
    //     if(com_a < com_c){
    //         printf("%s\n", a);
    //     }else{
    //         printf("%s\n",c);
    //     }
    // }else{
    //     printf("%s\n",b);
    // }
    if(strcmp(a,b) < 0 && strcmp(a,c) < 0){
        printf("%s\n",a);
    }else if(strcmp(b,a) < 0 && strcmp(b,c) < 0){
        printf("%s\n",b);
    }else{
        printf("%s\n",c);
    }

    //max
    if(strcmp(a,b) > 0 && strcmp(a,c) > 0){
        printf("%s\n",a);
    }else if(strcmp(b,a) > 0 && strcmp(b,c) > 0){
        printf("%s\n",b);
    }else{
        printf("%s\n",c);
    }

    //max
    // if(com_a >= com_b && com_a >= com_c){
    //     printf("%s\n",a);
    // }else if(com_b >= com_a && com_b >= com_c){
    //     printf("%s\n",b);
    // }else{
    //     printf("%s\n",c);
    // }
    
    return 0;
}
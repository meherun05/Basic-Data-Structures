#include<stdio.h>
#include<string.h>

int main(){
    char a[20] = "Hello";
    char b[20] = "World";
    // int len_a = strlen(a);
    // int len_b = strlen(b);
    // int len = len_a + len_b;

    // for (int i = len_a,j=0; i < len; i++,j++)
    // {
    //     a[i]=b[j];
    // }

    strcat(a,b);
    printf("%s",a);
    
    return 0;
}
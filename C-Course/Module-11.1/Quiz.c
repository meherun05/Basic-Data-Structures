#include<stdio.h>
#include<string.h>

int main(){
    // char a[] ="hi, we are learning string! ";
    // printf("%d",strlen(a));
     //=========================
    // char a[] = "hello";
    //     char b[] = "world";
    //     strcpy(b,a);
    //     printf("%s %s",a,b);
     //=========================
    // char a[20] = "apples";
    // char b[20] = "apply";
    // int c = strcmp(a,b);
    // printf("%d",c);
    //=========================
    // char a[20] = "aaa";
    // char b[20] = "abc";
    // int c = strcmp(b,a);
    // printf("%d",c);
     //=========================
    char a[20] = "hello";
    char b[20] = "world";
    char c[20] = "hello world";
    strcat(b,a);
    strcpy(c,b);
    printf("%s",c);

    return 0;
}
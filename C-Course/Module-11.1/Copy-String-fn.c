#include<stdio.h>
#include<string.h>

int main(){
    char a[20];
    char b[20] = "abcdef";
    // int lenght = strlen(b);

    // for (int i = 0; i < lenght; i++)
    // {
    //     a[i] = b[i];
    // }
    strcpy(a,b); // this function copy one string tp another first destination and the sourse
    
    printf("%s %s",a,b);
    return 0;
}
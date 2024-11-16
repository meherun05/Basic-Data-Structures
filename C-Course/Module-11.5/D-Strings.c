#include<stdio.h>
#include<string.h>

int main(){
    char a[10000];
    char b[10000];
    char temp_a[10000];
    char temp_aa[10000];
    scanf("%s",a);
    scanf("%s",b);
    int len_a = strlen(a);
    int lent_b = strlen(b);
    int len = len_a+ lent_b;
    printf("%d %d\n",len_a,lent_b);
    strcpy(temp_a,a);
    strcpy(temp_aa,a);
    strcat(a,b);
    printf("%s\n",a);
    temp_a[0]= b[0];
    b[0] = temp_aa[0];
    printf("%s %s",temp_a,b);
    return 0;
}
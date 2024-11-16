#include<stdio.h>
#include<string.h>

int main(){
    char a[10001];
    char b[10001];
    scanf("%s",a);
    scanf("%s",b);
    int lenght_a = strlen(a);
    int lenght_b = strlen(b);
    int s;
    if (lenght_a < lenght_b){
        s = lenght_a;
    }else{
        s = lenght_b;
    }
        printf("%d %d\n",lenght_a,lenght_b);
        printf("%s%s\n",a,b);
        char ba = a[0];
        if(a){
            a[0] = b[0];
        }
        if(b){
            b[0]= ba;
        }
        printf("%s %s\n",a,b);
    
    return 0;
}
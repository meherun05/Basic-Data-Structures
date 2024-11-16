#include<stdio.h>
void fun(){
    printf("fun\n");
    // fun();
}
void f1(){
    printf("f1");
    fun();
}
int main(){
    printf("f;");
    fun();
    return 0;
}
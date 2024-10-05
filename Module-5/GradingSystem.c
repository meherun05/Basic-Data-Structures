#include<stdio.h>

int main(){
    int marks ;
    scanf("%d",&marks);
    if(marks >=80 && marks <= 100){
        if(marks >= 90){
            printf("You have got schoolership\n");
        }
        printf("You have got A+ grade");
    }else if(marks >=70 && marks <= 89){
        printf("You have got A grade");
    }
    else if(marks >=60 && marks <= 69){
        printf("You have got A- grade");
    }
    else if(marks >=50 && marks <= 59){
        printf("You have got B grade");
    }
    else if(marks >=40 && marks <= 49){
        printf("You have got C grade");
    }
    else if(marks >=33 && marks <= 39){
        printf("You have got D grade");
    }
    else if(marks >=0 && marks <= 32){
        printf("You have got F grade");
    }
    else{
        printf("Invalid Marks");
    }
}
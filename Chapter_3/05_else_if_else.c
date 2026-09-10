#include<stdio.h>

int main(){
    int age;

    printf("Enter your age: \n");
    scanf("%d", &age);

    if(age>=18>30){
        printf("You are eligible to drive!\n");
    }
    else if(age<18){
        printf("You are not eligible to drive ;( \n)");
    }
    else if(age>30){
        printf("You are eligible to drive and you are an elder person. \n");
    }
    else if(age>60){
        printf("You are eligible to drive but since you are an old age person it is preferred that you should avoid driving :) \n");
    }

    return 0;
}
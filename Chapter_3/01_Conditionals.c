#include<stdio.h>

int main(){
    int age;

    printf("Enter your age: %d", age);
    scanf("%d", &age);

    if(age>10){
        printf("Your age is greater than 10!\n");
        printf("Next condition… \n");
    }
    if(age%2==0){
        printf("Your age is divisible by 2!\n");
    }
    return 0;
}
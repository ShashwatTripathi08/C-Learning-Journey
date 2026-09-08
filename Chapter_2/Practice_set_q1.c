#include<stdio.h>

int main(){
    // To check wether a number is divisible by 97
    int a = 2435637;
    printf("The value of a%97 is %d", a%97);

    // Since we get a non zero remainder, it means that a is not divisible by 97
    return 0;
}
#include<stdio.h>

int main(){
    int a = 10;
    if (a = 11){ // This is a assignment operator, not a comparison operator. It reassigns the value of a to 11.
        printf("I am 11");
    }
    else {
        printf("I am not 11");
    }

    return 0;
}
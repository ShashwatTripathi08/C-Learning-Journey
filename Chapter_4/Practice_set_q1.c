#include<stdio.h>
/*
Write a program of loop which displays natural numbers from 10 to 20 when initial counter is initialized to 0.
*/
int main(){
    int i = 0;

    while (i<=20){
        if(i>=10){
        printf("%d\n", i);
        }
        i++;

    }

    return 0;
}
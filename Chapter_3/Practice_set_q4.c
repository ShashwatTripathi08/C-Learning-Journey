#include<stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if(year%4==0 && year%100!=0 || year%400==0)
        printf("Entered year is a Leap year!\n");

    else
        printf("Entered year is not a Leap year!\n");

    return 0;
}
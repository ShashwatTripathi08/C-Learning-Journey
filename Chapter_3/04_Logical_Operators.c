#include<stdio.h>

int main(){
    int a = 1; int b = 1;
    printf("The value of a AND b is %d\n", a&&b); // '&&' is AND logic operator
    printf("The value of a OR b is %d\n", a||b); // '||' is OR logic operator
    printf("The value of NOT(a) is %d\n", !a); // '!' is NOT logic operator
    printf("The value of NOT(b) is %d\n", !b); 

    if(a&&b){

        printf("The answer is true!\n");
        
    }
    return 0;
}
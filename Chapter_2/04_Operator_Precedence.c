#include<stdio.h>

int main(){
    int a = 16;
    int b = 8;
    int c = 2;
    int d = 4;
    int e = a*b - c*d;
    int f = a/b + d/c;

    printf("The answer of the equation is %d", e);
    printf("\nThe value of 2nd equation is %d", f);

    /*
    The following is the list of operator precendency in C
    
    Priority       Operators
    1st              * / %
    2nd               + -
    3rd                =
    
    Operators of higher priority are evaluated first in the absence of parenthesis
    */


    return 0;
}
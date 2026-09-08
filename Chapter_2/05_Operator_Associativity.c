#include<stdio.h>

int main(){
    /* 
    When operators of equal priority are present in an expression, the tie is taken care of by associativity

    x*y/z -> (x*y)/z
    x/y*z -> (x/y)*z

    *, /, % follows left to right associativity
    */

    int a = 6;
    int b = 6;
    int c = 3;
    
    printf("The value is %d", a/b*c);



    return 0;
}
#include<stdio.h>

int main(){
    int a = 10;
    int b = 10;
    int c = a*b;
    printf("The value of a is %d, value of b is %d and the value of c is %d", a, b, c);
    // (%)Modulus Operator is used to get the remainder
    printf("\nThe remainder when a is divided by b is: %d", a%b);
    
    // This does not work for exponentiation in C
    // ind d = a^b;

    return 0;
}
// a%b cannot be used for float values
// Modulus operator usually used for checking divisibility
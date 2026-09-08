#include<stdio.h>

int main(){
    int a = 9;
    int b = 2;
    float c = 9/2;
    int x = 6.7;
    int z = 9;
    printf("The value of a/b is %f", c);

    float d = 9.0;
    float f = d/b;
    printf("\nThe value of d/b is %f", f);

    float k = 2.0;
    float g = d/k;
    printf("\nThe value of c/k is %f", g);
    
    printf("\nThe value of x is %d", x); // The ouput gets demoted from 6.7 to 6

    printf("\nThe value of z is %d", z); // Output gets promoted to float i.e 9.0

    int v = 3.0/9;
    printf("\nThe value of v is %d", v); // Since v is an int, it will not store 0.33333.. as the answer


    return 0;
    /*
    int and int - int 
    int and float - float
    float and float - float
    */
}
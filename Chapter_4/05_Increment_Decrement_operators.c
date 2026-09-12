#include<stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5;
    printf("The value of i is %d\n", i);

    i++; 
    printf("The value of i is %d\n", i);

    ++i; 
    printf("The value of i is %d\n", i);

    printf("The value of i is %d\n", i++); // Post increment operator: i++⁠ means "Use the current value first, THEN increase it." After printing, it secretly increases ⁠i⁠ to 13 in the background.

    printf("The value of i is %d\n", ++i); // Pre imcrement operator: ⁠++i⁠ means "Increase the value first, THEN use it."

/*
When ⁠i++⁠ and ⁠++i⁠ sit on their own individual lines, they do the exact same thing. 
The difference only matters when you try to increment a variable while simultaneously 
using it inside another command like ⁠printf⁠.
*/ 

    i--;
    printf("The value of i is %d\n", i);

    --i;
    printf("The value of i is %d\n", i);

    printf("The value of i is %d\n", i--); // Post decrement operator: i-- means "Use the current value first, THEN decrease it." After printing it to the screen, it secretly subtracts 1 in the background, making ⁠i⁠ equal to 11.

    printf("The value of i is %d\n", --i); // Pre decrement operator: --i means "Decrease the value first, THEN use it."

/*
When ⁠i-- and ⁠--i sit on their own individual lines, they do the exact same thing. 
The difference only matters when you try to decrement a variable while simultaneously 
using it inside another command like ⁠printf⁠.
*/

    i += 2; // it is same as i = i + 2
    printf("The value of i is %d\n", i);

    i -= 2; // it is same as i = i - 2
    printf("The value of i is %d\n", i);

    // These are called compount operators. i +(or)-= n 

    return 0;
}
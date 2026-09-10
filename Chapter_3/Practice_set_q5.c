// To check whether a character is lowercase or not
#include<stdio.h>

int main(){
    char ch = 'a';
    printf("The character is %c \n", ch);
    // To check the ascii value through which the program would be able to comment on the state of character we use the following %d.
    printf("The value of the character is %d\n", ch);

    // ASCII value of lowercase characters is from 97 to 122.

    if(ch>=97 && ch<=122)
        printf("It is a lowercase character!\n");
    
    else
        printf("This character is not lowercase.\n");

    return 0;
}
#include<stdio.h>

int main(){
    int a = 6;
    float b = 1.4;
    char c = 'a';

    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("char: %zu byte\n", sizeof(char));

    return 0;
}
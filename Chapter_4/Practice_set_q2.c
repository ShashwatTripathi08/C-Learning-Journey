#include<stdio.h>

int main(){
    int n, i=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i += n;
    } while (i<= n*10);
    
    return 0;
}
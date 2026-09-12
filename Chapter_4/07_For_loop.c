// understanding through a question 

#include<stdio.h>

int main(){
    int n, i = 1;
    printf("Enter a natural number: \n");
    scanf("%d", &n);

    for ( i = 1; i <= n ; i++)
    {
        printf("The value of i is %d\n", i);
    }
    
    return 0;
}
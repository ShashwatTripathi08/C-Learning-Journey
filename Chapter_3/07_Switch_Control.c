#include<stdio.h>

int main(){
    int a;
    printf("Enter a: \n");
    scanf("%d", &a);
    
    switch(a){
        case 1:
            printf("You entered 1\n"); 
        case 2:
            printf("You entered 2\n");
        case 3: 
            printf("You entered 3\n");
        case 4:
            printf("You entered 4\n");
    }
    return 0;
    // If the value of a matches with any of the cases, it will execute that case and further case after that particular case
}
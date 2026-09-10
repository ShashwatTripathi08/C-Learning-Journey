#include<stdio.h>

int main(){
    int Marks;
    printf("Enter your Marks out of 100: ");
    scanf("%d", &Marks);

    if (Marks>=90 && Marks<=100){
        printf("Congrats, You got A grade! \n");
    }

    else if (Marks>=80 && Marks<90){
        printf("You got B grade. \n");
    }

    else if (Marks>=70 && Marks<80){
        printf("Bad. You got C grade. \n");
    }

    else if (Marks>=60 && Marks<70){
        printf("Horrible. You got D grade. \n");
    }

    else{
        printf("What are you doing Bro?");
    }

    return 0;

}
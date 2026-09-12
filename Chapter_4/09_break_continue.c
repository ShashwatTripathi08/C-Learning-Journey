

#include<stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if(i == 5){
            continue; // Now it skips BEFORE printing
        }
        
        if(i == 14){
            break; 
        }

        printf("The value of i is %d\n", i);
    }
    printf("Code ends here!");
    return 0;
}

#include<stdio.h>

int main()
{
    printf("Even number from 1 to 50 :");
    for(int i=1; i<=50; i++){
        if(i%2==0){
            printf("\n%d",i);
        }
    }
    return 0;
}
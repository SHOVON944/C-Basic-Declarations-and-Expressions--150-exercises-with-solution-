#include<stdio.h>

int main()
{
    int x;
    int round=1;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Even number is: ");
    for(int i=x+1; round<=20; i++,round++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    round = 1;
    printf("\n");
    printf("Odd number is: ");
    for(int i=x+1; round<=20; i++,round++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
    return 0;
}
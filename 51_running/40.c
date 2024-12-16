#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the last number: ");
    scanf("%d",&b);
    for(int i=a; i<=b; i++){
        if(i%7==2 || i%7==3){
            printf("\n %d",i);
        }
    }
    return 0;
}
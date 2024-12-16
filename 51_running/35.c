#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    if(a>b){
        printf("The order is discending");
    } else{
        printf("The order is ascending");
    }
    return 0;
}
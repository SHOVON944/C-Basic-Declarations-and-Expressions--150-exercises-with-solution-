#include<stdio.h>

int main()
{
    int x;
    printf("Enter the checking number: ");
    scanf("%d",&x);
    x>0 && x%2==0 ? printf("The number is Positive and Even") : x>0 && x%2!=0 ? printf("The number is Positive and Odd") : x<0 && x%2==0 ? printf("The number is Negative and Even") : printf("The number is Negative and Odd");
    return 0;
}
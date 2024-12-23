#include<stdio.h>

int main()
{
    float x,y;
    printf("Enter the First number: ");
    scanf("%f",&x);
    printf("Enter the second number: ");
    scanf("%f",&y);
    if (y==0) printf("Division not possible...!");
    else printf("Division is %f",x/y);;
    return 0;
}
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    a<<=2;
    b=a;
    printf("b = %d",b);
    return 0;
}
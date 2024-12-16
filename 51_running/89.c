#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    printf("Enter z: ");
    scanf("%d",&z);
    int result = x+y+z;
    printf("Result is: %d",result);
    return 0;
}
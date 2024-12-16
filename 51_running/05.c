#include<stdio.h>

int main()
{
    int area,perimeter,a,b;
    printf("Enter the height of the rectangle :");
    scanf("%d",&a);
    printf("Enter the width of the rectangle :");
    scanf("%d",&b);
    perimeter=2*(a+b);
    area=a*b;
    printf("The Perimeter of the rectangle is :%d\n",perimeter);
    printf("The Area of the rectangle is :%d\n",area);
    return 0;
}
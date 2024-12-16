#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main()
{
    int r;
    float area,perimeter;
    printf("Enter the radius of the Circle :");
    scanf("%d",&r);
    perimeter= 2*PI*r;
    area=PI*pow(r,2);
    printf("The Perimeter of the Circle is :%f\n",perimeter);
    printf("The Area of the Circle is :%f",area);
    return 0;
}
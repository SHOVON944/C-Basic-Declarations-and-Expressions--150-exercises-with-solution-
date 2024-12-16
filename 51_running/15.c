#include<stdio.h>
#include<math.h>

int main()
{
    float x1,x2,y1,y2,distance;
    printf("Enter x1 value :");
    scanf("%f",&x1);
    printf("Enter y1 value :");
    scanf("%f",&y1);
    printf("Enter x2 value :");
    scanf("%f",&x2);
    printf("Enter y2 value :");
    scanf("%f",&y2);
    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distance between two point :%.2f",distance);
    return 0;
}
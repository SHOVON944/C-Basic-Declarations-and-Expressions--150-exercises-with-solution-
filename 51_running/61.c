#include<stdio.h>
#include<math.h>

int main()
{
    float x,value;
    printf("Enter the value: ");
    scanf("%f",&x);
    value = sin(1/x);
    printf("Value of sin(1/x): %.4f",value);
    return 0;
}
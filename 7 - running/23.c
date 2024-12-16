#include<stdio.h>

int main()
{
    float a,b,c;
    printf("Enter first arm of the triangle :");
    scanf("%f",&a);
    printf("Enter second arm of the triangle :");
    scanf("%f",&b);
    printf("Enter third arm of the triangle :");
    scanf("%f",&c);

    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("The triangle premeter is =%.2f",a+b+c);
    } else{
        printf("Not possible to create a triangle");
    }
    return 0;
}
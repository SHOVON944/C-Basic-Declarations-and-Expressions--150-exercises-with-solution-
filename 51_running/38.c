#include<stdio.h>

int main()
{
    float a,b;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    if(b==0){
        printf("Division not possible");
    } else{
        printf("The divider is:%f",a/b);
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int x;
    float avrg;
    int positiveValu =0;
    printf("Enter values (without zero or negative): ");
    scanf("%d",&x);
    if(x<=0){
        printf("No positive value");
    }
    int maximum = x;
    int minimum = x;
    int sum = 0;
    while(x>0){
        if(maximum<x){
            maximum = x;
        }
        if(minimum>x){
            minimum = x;
        }
        if(x>0){
            sum = sum+x;
            positiveValu+=positiveValu;
        }
     printf("Enter values (without zero or negative): ");
    scanf("%d",&x);
    }
    avrg = sum/positiveValu;
    printf("The maximum number is: %d",maximum);
    printf("The minimum  number is: %d",minimum);
    printf("The positive number is: %d",positiveValu);
    printf("The average value is: %f",avrg);
    return 0;
}
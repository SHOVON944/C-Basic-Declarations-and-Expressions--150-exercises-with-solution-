#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    if(x>=0 && x<=80){
        if(x>=0 && x<=20){
            printf("Range [0,20]");
        } if(x>=21 && x<=40){
            printf("Range [21,40]");
        } if(x>=41 && x<=60){
            printf("Range [41,60]");
        } if(x>61 && x<=80){
            printf("Range [61,80]");
        }
    } else{
        printf("Outside the range");
    }
}
#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a>0){
        if(a%2==0){
            printf("Positive Even");
        } else{
            printf("Positive odd");
        }
    } else if(a==0){
        printf("Even");
    } else{
        if(a%2==0){
            printf("Negative Even");
        } else{
            printf("Negative Odd");
        }
    }
    return 0;
}
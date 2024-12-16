#include<stdio.h>

int main()
{
    float n;
    float sum= 0;
    printf("Enter the number:");
    scanf("%f",&n);
    if(n==0){
        printf("1/0");
        return 0;
    }
    for(float i=1; i<=n; i++){
        sum = sum + (1/i);
    }
    printf("sum is  :%.2f",sum);
    return 0;
}
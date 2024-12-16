#include<stdio.h>

int main()
{
    int x,mod;
    int sum =0;
    printf("Enter the value: ");
    scanf("%d",&x);
    while(x>=1){
        mod = x%10;
        sum = sum+mod;
        x= x/10;
    }
    printf("The entered value sum is: %d",sum);
    return 0;
}
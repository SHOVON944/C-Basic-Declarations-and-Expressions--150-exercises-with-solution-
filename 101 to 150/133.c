#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int sum = a+b;
    int count=0;
    while(sum>0){
        sum=sum/10;
        count ++;
    }
    printf("Number of digits of the sum value of the said numbers: %d",count);
    return 0;
}
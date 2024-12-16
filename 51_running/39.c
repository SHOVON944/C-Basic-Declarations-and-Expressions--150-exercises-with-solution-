#include<stdio.h>

int main()
{
    int a,b;
    int sum = 0;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the last number: ");
    scanf("%d",&b);
    for(int i=a; i<=b; i++){
        if(i%17!=0){
            sum += i;
        }
    }
    printf("The sum is(without disible by 17) : %d",sum);
    return 0;
}
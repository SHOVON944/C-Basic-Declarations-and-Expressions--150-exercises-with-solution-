#include<stdio.h>

int main()
{
    int n,mod;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0){
        mod = n%10;
        if(mod==3) count++;
        n /=10; 
    }
    printf("The number of threes in the said number is: %d",count);
    return 0;
}
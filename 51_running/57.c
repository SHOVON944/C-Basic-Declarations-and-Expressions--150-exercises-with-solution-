#include<stdio.h>

int main()
{
    int x;
    int reverse = 0;
    int mod;
    printf("Enter the number: ");
    scanf("%d",&x);
    while(x>0){
        mod = x%10;
        reverse = reverse*10 + mod;
        x = x/10;
    }
    printf("The reverse no is : %d",reverse);
    return 0;
}
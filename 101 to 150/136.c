#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int number){
    if(number<=1) return false;  
    for (int i=2; i*i<=number; i++) {
        if(number%i==0) return false; 
    }
    return true;
}

int main()
{
    int x;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d",&x);
    for(int i=2; i<=x; i++) {
        if(checkPrime(i)) {
            count++;
        }
    }
    printf("Number of prime numbers which are less than or equal to %d = %d",x,count);
    return 0;
}
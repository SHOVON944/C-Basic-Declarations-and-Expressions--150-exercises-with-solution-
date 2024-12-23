#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("\nRemainder value is 3 after divide all numbers between 1 and 100 by %d:\n", x);
    for(int i=1; i<=100; i++){
        if(i%x==3) printf("%d\n",i);
    }
    return 0;
}
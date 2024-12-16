#include<stdio.h>

int main()
{
    int a,b;
    int sum = 0;
    printf("Enter a pair of numvers (for example 10,2):\n");
    printf("Enter first numver of the pair: ");
    scanf("%d",&a);
    printf("Enter the second number of the pair: ");
    scanf("%d",&b);
    if(a<b){
        return 0; // if x is less than y, exit the program
    }
    printf("List of odd number: \n");
    for(int i=b; i<=a; i++){
        if(i%2!=0){
            printf("%d\n",i);
            sum = sum + i;
        }
    }
    printf("Sum = %d\n",sum);
    return 0;
}
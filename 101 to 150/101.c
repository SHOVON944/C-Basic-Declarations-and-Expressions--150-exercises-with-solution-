#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x>=0 && x<=30) printf("0-30");
    if(x>=31 && x<=50) printf("0-30");
    if(x>=51 && x<=80) printf("0-30");
    if(x>=81 && x<=100) printf("0-30");
    return 0;
}
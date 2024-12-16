#include<stdio.h>

int main()
{
    int i,p,r,t;
    printf("Enter N: ");
    scanf("%d",&p);
    printf("Enter r: ");
    scanf("%d",&r);
    printf("Enter t: ");
    scanf("%d",&t);
    i= (p*r*t)/100;
    printf("Interest : %d",i);
    return 0;
}
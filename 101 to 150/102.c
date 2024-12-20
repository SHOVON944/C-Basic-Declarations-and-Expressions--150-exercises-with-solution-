#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three number: ");
    scanf("%d,%d,%d",&x,&y,&z);
    printf("Original number is:%d %d %d",x,y,z);
    (x<y && y<z) ? printf("Sorter order is: %d %d %d,x,y,z") : (y<x && x<z) ? printf("Sorter order is: %d %d %d,y,x,z") : 
}
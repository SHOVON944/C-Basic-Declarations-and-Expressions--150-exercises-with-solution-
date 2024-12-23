#include<stdio.h>

int main()
{
    int first,second;
    printf("Enter the First number: ");
    scanf("%d",&first);
    printf("Enter the second number: ");
    scanf("%d",&second);
    if (first > second) printf("Descending order");
    else printf("Ascendding order");
    return 0;
}
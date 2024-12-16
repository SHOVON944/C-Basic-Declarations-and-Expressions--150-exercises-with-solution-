#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the multiple number: ");
    scanf("%d",&x);
    printf("Enter the multipled number: ");
    scanf("%d",&y);
    if(x%y==0){
        printf("%d is a multiple of %d",x,y);
    } else{
        printf("%d is not a multiple of %d",x,y);
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter x and y: \n");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x%y==0 || y%x==0){
        printf("Multiplies");
    } else{
        printf("No");
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the two number :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a%b==0){
        printf("Multuplied");
    } else{
        printf("Not Multiplied");
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    printf("Enter the third number :");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("The maximam value of three numbers :%d",a);
        } else{
            printf("The maximum value of three numbers :%d",c);
        }
    } else{
        if(b>c){
            printf("The maximam value of three numbers :%d",b);
        } else{
            printf("The maximam value of three numbers :%d",c);
        }
    }
    return 0;
}
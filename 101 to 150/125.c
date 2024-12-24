#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int b=1;
    int multiple = a;
    for(int i=0; i<7; i++){
        multiple = 5*b;
        printf("array_num[%d] = %d\n",i,multiple);
        b*=2;
    }
    return 0;
}
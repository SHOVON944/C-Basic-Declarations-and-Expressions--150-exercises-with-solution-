#include<stdio.h>

int main()
{
    int x;
    float sum = 0;
    printf("Input five subject marks(0-100):\n");
    for(int i=1; i<=5; i++){
        scanf("%d",&x);
        sum+=x;
    }
    printf("Average is: %f",sum/5);
    return 0;
}
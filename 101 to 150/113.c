#include<stdio.h>

int main()
{
    int a=1;
    int b=100;
    printf("a       b\n");
    while(b>-1){
        printf("%d      %d\n",a,b);
        a+=5,b-=10;
    }
    return 0;
}
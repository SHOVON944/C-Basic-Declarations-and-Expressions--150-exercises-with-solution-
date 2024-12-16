#include<stdio.h>

int main()
{
    int square,quibe;
    for(int i=1; i<=20; i++){
        square = i*i;
        quibe = i*i*i;
        printf("%d  %d  %d\n",i,square,quibe);
    }
    return 0;
}
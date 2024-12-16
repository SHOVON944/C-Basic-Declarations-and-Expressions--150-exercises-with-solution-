#include<stdio.h>

int main()
{
    float s = 1;
    for(float i=2; i<=50; i++){
        s = s+ (1/i);
    }
    printf("s = %f",s);
    return 0;
}
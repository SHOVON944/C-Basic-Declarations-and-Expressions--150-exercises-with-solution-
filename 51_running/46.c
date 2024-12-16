#include<stdio.h>

int main()
{
    float s = 0;
    float a = 1;
    for(float i=1; i<=7; i+=2){
        s = s+ (i/a);
        a*=2;
    }
    printf("s = %.2f",s);
    return 0;
}
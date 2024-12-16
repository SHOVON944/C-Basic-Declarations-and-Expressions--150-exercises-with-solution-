#include<stdio.h>
#include<math.h>

int main()
{
    printf("\n=======================================");
    printf("\n n    2 to power n      2 to power -n");
    printf("\n=======================================");
    for(int i=0; i<=10; i++){
        float power = pow(2,i);
        float inversPower=1/power;
        printf("\n%2d   %0.f     %20.12lf", i, power, inversPower);
    }
    printf("\n======================================");
    return 0;
}

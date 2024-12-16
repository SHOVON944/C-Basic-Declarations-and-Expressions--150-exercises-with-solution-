#include<stdio.h>

int main ()
{
    printf("x\tx+2\tx+4\tx+6\n");
    printf("------------------------\n");
    int plus = 1;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=4; j++){
            printf("%d\t",plus);
            plus += 2;
        }
        printf("\n");
        plus -= 3;
    }
    return 0;
}
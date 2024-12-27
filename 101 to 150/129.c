#include<stdio.h>

int main()
{
    float a;
    printf("Enter the number: ");
    scanf("%f",&a);
    for(int i=0; i<10; i++){
        printf("arr_numbers[%d] = %.4f\n",i,a);
        a/=3;
    }
    return 0;
}
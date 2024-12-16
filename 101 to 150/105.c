#include<stdio.h>

int main()
{
    printf("Enter the number(under 7): \n");
    float x;
    int count_minus = 0;
    float sum_minus = 0;
    int count_plus = 0;
    float sum_plus = 0;
    for(int i=1; i<=7; i++){
        scanf("%f",&x);
    if(x>0){
        sum_plus = sum_plus + x;
        count_plus++;
    }
    if(x<0){
        sum_minus = sum_minus + x;
        count_minus++;
    }
    }
    float avrg_plus = sum_plus/count_plus;
    float avrg_minus = sum_minus/count_minus;

    printf("\n%d Number of positve numbers:avarage = %.2f\n ",count_plus,avrg_plus);
    printf("\n%d Number of negative numbers:avarage = %.2f\n ",count_minus,avrg_minus);
    return 0;
}
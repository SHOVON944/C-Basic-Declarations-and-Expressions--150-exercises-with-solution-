#include<stdio.h>

int main()
{
    //declaration
    double wt1,wt2,noItem1,noItem2,avrg;
    //collect input
    printf("Enter Weight-Item1 :");
    scanf("%lf",&wt1);
    printf("Enter No of Item1 :");
    scanf("%lf",&noItem1);
    printf("Enter Weight-Item2 :");
    scanf("%lf",&wt2);
    printf("Enter No of Item2 :");
    scanf("%lf",&noItem2);
    //callculating avarage
    avrg=((wt1*noItem1)+(wt2*noItem2))/(noItem1+noItem2);
    //printing average
    printf("The avarage is :%lf",avrg);
    return 0;
}
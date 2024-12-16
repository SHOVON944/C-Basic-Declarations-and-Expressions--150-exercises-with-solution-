#include<stdio.h>

int main()
{
    int number,years,months,days;
    printf("Enter the number :");
    scanf("%d",&number);
    years = number/365;
    months = (number%365)/30;
    days = ((number%365)%30);
    printf("Years =%d\n",years);
    printf("Months =%d\n",months);
    printf("Days =%d\n",days);
    return 0;
}
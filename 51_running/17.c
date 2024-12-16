#include<stdio.h>

int main()
{
    int number,hour,min,sec;
    printf("Enter the number(in second) :");
    scanf("%d",&number);
    // convert second -> hour
    hour = (number/60)/60;
    min = (number%3600)/60;
    sec = number%60;
    printf("Hours :%d\n",hour);
    printf("Minutes :%d\n",min);
    printf("Second :%d\n",sec);
    return 0;
}
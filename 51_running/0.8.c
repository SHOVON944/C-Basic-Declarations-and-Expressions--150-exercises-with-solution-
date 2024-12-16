#include<stdio.h>

int main()
{
    int givenNoDays,years,weeks,days;
    printf ("Enter the No of days :");
    scanf("%d",&givenNoDays);
    years = givenNoDays/365;
    weeks = (givenNoDays%365)/7;
    days = givenNoDays-((years*365)+(weeks*7));
    printf ("Years :%d\n",years);
    printf ("weeks :%d\n",weeks);
    printf ("days :%d\n",days);
    return 0;
}
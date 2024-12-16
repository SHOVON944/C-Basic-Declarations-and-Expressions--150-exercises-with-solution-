#include<stdio.h>

int main()
{
    float interest,principal,rateOfInterest,days;
    while(principal!=0){
        printf("Enter the Principal: ");
        scanf("%f",&principal);
        printf("Enter the rate of interest: ");
        scanf("%f",&rateOfInterest);
        printf("Enter the Days: ");
        scanf("%f",&days);
        interest = (principal*rateOfInterest*days)/365;
        printf("The Interest is: %f\n\n\n",interest);
    }
    return 0;
}
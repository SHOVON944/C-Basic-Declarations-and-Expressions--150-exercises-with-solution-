#include<stdio.h>

int main()
{
    float arr[5];
    int sum = 0;
    int number = 0;
    float evenAvrg;
    printf("Enter the five(5) Even number :\n");
    for(int i=1; i<=5; i++){
        scanf("%f",&arr[i]);
        if(arr[i]>0){
            sum=sum+arr[i];
            number++;
        }
    }
    evenAvrg=sum/number;
    printf("Number of positive number :%d",number);
    printf("The Even number Avarage is :%f",evenAvrg);
    return 0;
}
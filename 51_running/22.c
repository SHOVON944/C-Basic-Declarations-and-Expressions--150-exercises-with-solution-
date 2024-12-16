#include<stdio.h>

int main()
{
    int arr[5];
    int sum = 0;
    printf("Enter the five number :\n");
    for(int i=1; i<=5; i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0){
            sum = sum+arr[i];
        }
    }
    printf("Sum of odd number =%d\n",sum);
    return 0;
}
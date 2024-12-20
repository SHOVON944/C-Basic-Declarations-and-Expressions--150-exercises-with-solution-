#include<stdio.h>
int main()
{
    int arr[7];
    int positive=0;
    int negative=0;
    int even=0;
    int odd=0;
    for(int i=0; i<7; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0) positive++;
        if(arr[i]<0) negative++;
        if(arr[i]%2==0) even++;
        if(arr[i]%2!=0) odd++;
    }
    printf("Positive number is: %d\n",positive);
    printf("Negative number is: %d\n",negative);
    printf("Even number is: %d\n",even);
    printf("Odd number is: %d\n",odd);
    return 0;
}
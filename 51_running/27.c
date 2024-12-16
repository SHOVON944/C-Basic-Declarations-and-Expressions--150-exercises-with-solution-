#include<stdio.h>

int main()
{
    int arr[5];
    int countPos = 0;
    int countNeg = 0;
    printf("Enter the five(5) number :\n");
    for(int i=0; i<=4; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            countPos++;
        } if(arr[i]<0){
            countNeg++;
        }
    }
    printf("Positive number =%d\n",countPos);
    printf("Negative number =%d",countNeg);
}
#include<stdio.h>

int main()
{
    int arr[7];
    printf("Enter the 7 number: \n");
    for(int i=0; i<7; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array positions that store a value less or equal to 0:\n");
    for(int i=0; i<7; i++){
        if(arr[i]<=0){
            printf("arra_nums[%d] = %d\n",i,arr[i]);
        }
    }
    return 0;
}
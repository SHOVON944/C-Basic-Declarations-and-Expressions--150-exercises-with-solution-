#include<stdio.h>

int main()
{
    int arr[8];
    printf("Enter the 8 numbers: \n");
    for(int i=0; i<8; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=7; i>=0; i--){
        printf("array_numbers[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
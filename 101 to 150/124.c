#include<stdio.h>

int main()
{
    int arr[7];
    printf("Enter the 7 number: \n");
    for(int i=0; i<7; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements:\n");
    for(int i=0; i<7; i++){
        if(arr[i]<=0){
            printf("array_num[%d] = 0\n",i);
        } else{
            printf("array_num[%d] = %d\n",i,arr[i]);
        }
    }
    return 0;
}
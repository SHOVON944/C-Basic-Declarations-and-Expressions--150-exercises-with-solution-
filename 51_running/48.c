#include<stdio.h>

int main()
{
    int arr[7];
    printf("Enter the value: \n");
    for(int i=0; i<7; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<7; i++){
        if(arr[i]>0){
            printf("n[%d] = %d\n",i,arr[i]);
        } else{
            printf("n[%d] = 100\n",i);
        }
    }
    return 0;
}
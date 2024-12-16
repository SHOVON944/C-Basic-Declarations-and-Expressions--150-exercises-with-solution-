#include<stdio.h>

int main()
{
    float arr[5];
    printf("Enter the value: \n");
    for(int i=0; i<5; i++){
        scanf("%f",&arr[i]);
    }
    for(int i=0; i<5; i++){
        if(arr[i]<5){
            printf("a[%d] = %.2f\n",i,arr[i]);
        }
    }
    return 0;
}
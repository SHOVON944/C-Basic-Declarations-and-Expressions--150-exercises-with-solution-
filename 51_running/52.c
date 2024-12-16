#include<stdio.h>

int main()
{
    int n;
    int position = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int small = arr[0];
    for(int i=0; i<n; i++){
        if(small>arr[i]){
            small = arr[i];
            position =i+1;
        }
    }
    printf("Smallest value = %d\n",small);
    printf("Array Position = %d",position);
    return 0;
}
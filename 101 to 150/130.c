#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int position =0;
    int minimum = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<minimum){
            minimum = arr[i];
            position = i;
        }
    }
    printf("The minimum number is : %d\n",minimum);
    printf("The minimum number position is : %d",position);
    return 0;
}
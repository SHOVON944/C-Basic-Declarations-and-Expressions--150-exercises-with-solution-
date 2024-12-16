#include<stdio.h>

int main()
{
    int arr[5];
    printf("Enter the five values: \n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    int position=0;
    int a=arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]>a){
            a = arr[i];
        position = i+1;
        }
    }
    printf("The highest array is = %d\n",a);
    printf("Position is= %d",position);
    return 0;
}

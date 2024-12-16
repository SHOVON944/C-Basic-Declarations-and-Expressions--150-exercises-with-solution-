#include<stdio.h>

int main()
{
    int arr[7];
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);

    for(int i=0; i<7; i++){
        arr[i] = n;
        n *= 3;
    }
    for(int i=1; i<7; i++){
        printf("n[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
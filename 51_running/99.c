#include<stdio.h>

int main()
{
    int n;
        printf("Enter the number: ");
    scanf("%d",&n);
    int arr[n];
    int a = n-1;
    for(int i=0; i<arr[a]; i++){
        scanf("%d",&arr[i]);
    }
    printf("Number: ");
    for(int i=1; i<arr[a]; i++){
        printf("#");
    }
    printf("\n");
    return 0;
}
#include<stdio.h>

int main()
{
    int x;
    int digit_space[7];
    printf("Enter the number: ");
    scanf("%d",&x);
    for(int i=6; i>=0; i--){
        digit_space[i] = x%10;
        x = x/10;
    }
    for(int i=0; i<=6; i++){
        printf("%d  ",digit_space[i]);  // %d er por twrice space ase
    }
    return 0;
}
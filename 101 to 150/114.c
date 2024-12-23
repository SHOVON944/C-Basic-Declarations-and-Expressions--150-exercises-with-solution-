#include<stdio.h>

int main()
{
    int start,end;
    printf("Enter the starting number: ");
    scanf("%d",&start);
    printf("Enter the ending number: ");
    scanf("%d",&end);
    int sum = 0;
    for(int i=start; i<=end; i++){
        if(i%2==0){
            sum += i;
        }
    }
    printf("The even number sum between the number of %d to %d = %d",start,end,sum);
    return 0;
}
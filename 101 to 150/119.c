#include<stdio.h>

int main()
{
    int start,end;
    printf("Enter the First number: ");
    scanf("%d",&start);
    printf("Enter the second number: ");
    scanf("%d",&end);
    int sum = 0;
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    for(int i=start; i<=end;  i++){
        if(i%7!=0) sum+=i;
    }
    printf("The sum is between %d to %d (Except multiple number by 7): %d",start,end,sum);
    return 0;
}
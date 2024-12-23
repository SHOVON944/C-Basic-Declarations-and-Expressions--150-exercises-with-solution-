#include<stdio.h>

int main()
{
    int start,end;
    printf("Enter the starting number: ");
    scanf("%d",&start);
    printf("Enter the ending number: ");
    scanf("%d",&end);
    int sum = 0;
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    for(int i=start; i<=end; i++){
        printf("%d\n",i);
        sum += i;
    }
    float avrg = (float)sum/((end-start)+1);
    printf("The even number average between the number of %d to %d = %f",start,end,avrg);
    return 0;
}
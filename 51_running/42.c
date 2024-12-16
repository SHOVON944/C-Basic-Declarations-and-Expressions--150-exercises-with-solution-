#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter the no of line:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=3; j++){
            int power = pow(i,j);
            printf("%d ",power);
        }
        printf("\n");
    }
    return 0;
}
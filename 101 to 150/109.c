#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Even number square :\n");
    for(int i=1; i<=n; i++){
        if(i%2==0){
            int power = pow(i,2);
            printf("%d ^ 2 = %d\n",i,power);
        }
    }
    printf("\n");
    printf("Odd number square :\n");
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            int power = pow(i,2);
            printf("%d ^ 2 = %d\n",i,power);
        }
    }
    return 0;
}
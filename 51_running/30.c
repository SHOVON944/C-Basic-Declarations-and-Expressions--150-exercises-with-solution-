#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%2==0){
            int power = pow(i,2);
            printf("%d^2 = %d\n",i,power);
        }
    }
    return 0;
}
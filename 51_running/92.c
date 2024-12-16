#include<stdio.h>

int main()
{
    int n,mod;
    int cutting = 0;
    int multi = 1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        multi = multi*i;
    }
    while(multi>0){
        mod = multi%10;
        if(mod != 0){
            printf("The numbe is: %d",mod);
            break;
        }
        cutting = cutting *10 + mod;
        multi = multi/10;
    }
}
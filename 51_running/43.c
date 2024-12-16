#include<stdio.h>

int main()
{
    int p,q;
    int a=1;
    printf("Input number of line: ");
    scanf("%d",&p);
    printf("Numbers of character in a line: ");
    scanf("%d",&q);
    for(int i=1; i<=p; i++){
        for(int j=1; j<=q; j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
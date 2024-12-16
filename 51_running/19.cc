#include<stdio.h>

int main()
{
    int p,q,r,s;
    printf("Enter p :");
    scanf("%d",&p);
    printf("Enter q :");
    scanf("%d",&q);
    printf("Enter r :");
    scanf("%d",&r);
    printf("Enter s :");
    scanf("%d",&s);

    if((q>r) && (s>p) && (r+s) && (p+q) && (q>0) && (r>0) && (s>0) && (p%2==0)){
        printf("Correct Values");
    } else{
        printf("Wrong values");
    }
    return 0;
}
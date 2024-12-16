#include<stdio.h>

int main()
{
    char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("List of integer equivalents of letters (a-z, A-Z).\n");
    printf("==================================================\n");
    for(int i=0; i<52; i++){
        printf("%d ",str[i]);
        if((i+1)%6==0){
            printf("\n");
        }
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int pass,x=1;
    while(x!=0){
        printf("Enter the password: ");
        scanf("%d",&pass);
        if(pass==1234){
            printf("Correct Password\n");
            x=0;
        } else{
            printf("Incorrect Password\n");
        }
    }
    return 0;
}
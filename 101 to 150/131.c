#include<stdio.h>
#include<string.h>

int main()
{
    int n1_lenght,n2_lenght;
    char n1[50],n2[50];
    printf("Enter the first string: ");
    scanf("%s",n1);
    printf("Enter the second string: ");
    scanf("%s",n2);
    n1_lenght=strlen(n1);
    n2_lenght=strlen(n2);
    if(n1_lenght<n2_lenght) printf("Not present.");
    if(n1_lenght==n2_lenght){
        if(strcmp(n1,n2)){
            printf("Present");
        }
    }
    if(n1_lenght>n2_lenght){
        if(strcmp(&n1[n1_lenght-n2_lenght-1],n2)){
            printf("Present.");
        }
    }
    return 0;
}
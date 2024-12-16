#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50];
    char str2[50];
    scanf("%s",&str1[50]);
    strcpy(str2, str1);
    char convert=*str2;
    int size=sizeof(convert);
    printf("Size: %d",size);
    return 0;
}
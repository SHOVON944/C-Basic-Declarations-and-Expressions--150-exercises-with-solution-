#include<stdio.h>

int main()
{
    int a,highest;
    printf("Enter the  numbers: ");
    scanf("%d",&a);
    highest = a;
    for(int i=2;i<=5;++i){
    scanf("%d",&a);
    }
    for(int i=2;i<=5;i++){
    if(highest<a){
        highest = a;
    }
    }
    printf("The highest number is: %d",highest);
    return 0;
}
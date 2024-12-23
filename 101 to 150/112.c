#include<stdio.h>

int main()
{
    int x[7];
    printf("Enter the 7 number: ");
    for(int i=0; i<7; i++){
        scanf("%d",&x[i]);
    }
    int count =1;
    int maximam = x[0];
    for(int i=0; i<7; i++){
        if(x[i]>maximam){
            maximam = x[i];
            count =i+1;
        }
    }
    printf("Maximum number is: %d\n",maximam);
    printf("Maximum number position is: %d",count);
    return 0;
}
#include<stdio.h>

int main()
{
    int x;
    int count = 0;
    printf("Enter the number(between  1 to 50): ");
    scanf("%d",&x);
    for(int a=0; a<=9; a++){
        for(int b=0; b<=9; b++){
            for(int c=0; c<=9; c++){
                for(int d=0; d<=9; d++){
                    if(a+b+c+d==x){
                        printf("%d + %d + %d + %d\n",a,b,c,d);
                        count++;
                    }
                }
            }
        }
    }
    printf("Total number of combinations: %d",count);
    return 0;
}
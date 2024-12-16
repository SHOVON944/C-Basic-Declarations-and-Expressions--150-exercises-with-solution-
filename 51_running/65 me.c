#include<stdio.h>

int main()
{
    for(int i=2; i<=200; i++){
        for(int j=1; j<=i; j++){
            if(i%2!=j){
                printf("%d /n",j);
            }
        }
    }
    return 0;
}
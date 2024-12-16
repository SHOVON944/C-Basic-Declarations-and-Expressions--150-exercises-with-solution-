#include<stdio.h>

int main()
{
    int n;
    float avrg;
    int sum = 0,count = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=888){
        sum += n;
        count++;
        printf("Enter the number: ");
        scanf("%d", &n);
    }
    if(count){
    avrg = (float)sum/count;
    }
    printf("The avarage is: %f",avrg);
    return 0;
}
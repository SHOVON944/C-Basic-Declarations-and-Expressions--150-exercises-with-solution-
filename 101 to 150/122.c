#include<stdio.h>

int main()
{
    int start,end;
    printf("Enter the starting number: ");
    scanf("%d",&start);
    printf("Enter the ending number: ");
    scanf("%d",&end);
    int sum = 0;
    for(int i=1,j=start; i<=end; j++){
        if(j%2==0){
            sum+=j;
            i++;  //eikhane i dite hobe karon i tokhoni increament hobe jokhon j even number pabe .karon n ta even count korte bolece...jdi i++ for loop () bracket e kori thle seikhtre alltime i++ hobe seta hok even hok odd...kintu amader to n ta even sum caise sejnno jdi for() loop i i++ kori seikhete nta even hobe na half ta hobe karon odd er somoi o i++ hocce sejonno
        }
    }
    printf("\nSum of %d even numbers starting from %d = %d: ",start,end,sum);
    return 0;
}
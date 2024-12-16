#include<stdio.h>

int main()
{
    int km;
    float litter,avrgKm;
    printf("Enter total distance :");
    scanf("%d",&km);
    printf("Enter total total fuel spent in litter :");
    scanf("%f",&litter);
    avrgKm = km/litter;
    printf("Avarage Consuption :%.2f",avrgKm);
    return 0;
}
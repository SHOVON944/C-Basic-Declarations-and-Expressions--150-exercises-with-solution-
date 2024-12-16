#include<stdio.h>

int main()
{
    int amount,total;
    printf("Enter the amount :");
    scanf("%d",&amount);
    printf("There are,\n");

    // For 100.00 tk note,
    total = amount/100;
    printf("%d note(s) of 100.00\n",total);
    amount = amount-(total*100);

    // For 50.00 tk note,
    total = amount/50;
    printf("%d note(s) of 50.00\n",total);
    amount = amount-(total*50);

    // For 20.00 tk note,
    total = amount/20;
    printf("%d notes of 20.00\n",total);
    amount = amount-(total*20);

    // For 10.00 tk note,
    total = amount/10;
    printf("%d note(s) of 10.00\n",total);
    amount = amount-(total*0);

    // For 5.00 tk note,
    total = amount/5;
    printf("%d notes of 5.00\n",total);
    amount = amount-(total*5);

    // For 2.00 tk note,
    total = amount/2;
    printf("%d note(s) of 2.00\n",total);
    amount = amount-(total*2);

    // For 1.00 tk note,
    total = amount/1;
    printf("%d note(s) of 1.00\n",total);
    return 0;
}
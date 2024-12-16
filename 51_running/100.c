#include<stdio.h>

int main()
{
    float money;
    int total;
    printf("Enter the amount :");
    scanf("%f",&money);
    printf("There are,\n");
    float coin_money = money - (int)money;  // coin(float) type money.....
    int amount = (int)money;

    // For 100.00 tk note,
    if(amount>=100){
    total = (int)amount/100;
    printf("%d note(s) of 100.00\n",total);
    amount = amount-(total*100);
    }

    // For 50.00 tk note,
    if(amount>=50){
    total = (int)amount/50;
    printf("%d note(s) of 50.00\n",total);
    amount = amount-(total*50);
    }

    // For 20.00 tk note,
    if(amount>20){
    total = (int)amount/20;
    printf("%d notes of 20.00\n",total);
    amount = amount-(total*20);
    }

    // For 10.00 tk note,
    if(amount>10){
    total = (int)amount/10;
    printf("%d note(s) of 10.00\n",total);
    amount = amount-(total*0);
    }
    // For 5.00 tk note,
    if(amount>5){
    total = (int)amount/5;
    printf("%d notes of 5.00\n",total);
    amount = amount-(total*5);
    }
    // For 2.00 tk note,
    if(amount>2){
    total = (int)amount/2;
    printf("%d note(s) of 2.00\n",total);
    amount = amount-(total*2);
    }
    // For 1.00 tk note,
    if(amount>1){
    total = (int)amount/1;
    printf("%d note(s) of 1.00\n",total);
    }
    coin_money==0.75 ? printf("1 coin(s) of 0.50\n1 coin(s) of 0.25\n") : coin_money ==0.50 ? printf("1 coin(s) of 0.50\n") : coin_money == 0.25 ? printf("1 coin(s) of 0.25\n") : printf("No coin money");

    return 0;
    }
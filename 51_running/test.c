#include<stdio.h>

int main()
{
  float amount;
  int total;
  printf("Enter Amount: ");
  scanf("%f",&amount);
  printf("Currency Notes: ");


  total = (int)amount/500; //  For 500 tk note,
  if(amount>500){
    printf("\n500 number of Note(s): %.0f", total);
    amount = amount -(total*500);  //updating money
  }
  total = (int)amount/100; //  For 100 tk note,
  if(amount>100){
    printf("\n100 number of Note(s): %.0f", total);
    amount = amount -(total*100);  //updating money
  }
  total = (int)amount/50; //  For 50 tk note,
  if(amount>50){
    printf("\n50 number of Note(s): %d", total);
    amount = amount -(total*50);  //updating money
  }
  total = amount/20; //  For 20 tk note,
  if(amount>20){
    printf("\n20 number of Note(s): %d", total);
    amount = amount -(total*20);  //updating money
  }
  total = (int)amount/10; //  For 10 tk note,
  if(amount>10){
    printf("\n10 number of Note(s): %d", amount);
    amount = amount -(total*10);  //updating money
  }
  total = (int)amount/5; //  For 5 tk note,
  if(amount>5){
    printf("\n5 number of Note(s): %d", total);
    amount = amount -(total*5);  //updating money
  }
  total = (int)amount/2; //  For 2 tk note,
  if(amount>2){
    printf("\n500 number of Note(s): %d", total);
    amount = amount -(total*2);  //updating money
  }
  total = amount/0.50; //  For 0.50 coin note,
  if(amount>0.50){
    printf("\n0.50 number of Coi(s): %.2f", total);
    amount = amount -(total*0.50);  //updating money
  }
  total = amount/0.25; //  For 0.25 coin note,
  if(amount>0.25){
    printf("\n0.25 number of Coin(s): %.2f", total);
    amount = amount -(total*0.25);  //updating money
  }
}
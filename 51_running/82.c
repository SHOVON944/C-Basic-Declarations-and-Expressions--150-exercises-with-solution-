#include<stdio.h>

int main()
{
    int number,main_number,mod_formula;
    int mathformula = 0;
    printf("Enter the 5 digit number: ");
    scanf("%d",&number);
    main_number = number;
    while(number!=0){
        mod_formula = number%10;
        mathformula = mathformula*10 + mod_formula;
        number = number/10; 
    }
    if(main_number == mathformula){
        printf("%d is a palindrom number.",number);
    } else{
        printf("%d is not a palindrom number.",main_number);
    }
    return 0;
}
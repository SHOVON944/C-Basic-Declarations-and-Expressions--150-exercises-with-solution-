#include<stdio.h>

int main()
{
    int n,main_number,mod;
    int reverse = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    main_number = n;
    for(int i=2;i<n;i++){
        if(n%i!=0){
            while(n>0){
                mod = n%10;
                reverse = reverse*0 + mod;
                n = n/10;
            }
            if(reverse == main_number){
                printf("Yes its a prime and palindrome number");
            } else{
                printf("No,Its not a prime or palindrome number");
            }
        }
    }
    return 0;
}
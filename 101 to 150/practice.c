#include<stdio.h>

int main()
{
    int x;
    int round=1;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("Even numbers are: ");
    for (int i = x + 1; round <= 10; i++, round++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    round = 1; // Reset the round counter for the second loop
    printf("Odd numbers are: ");
    for (int i = x + 1; round <= 10; i++, round++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}

#include <stdio.h>

int main() {
    int digits[8], ascending_digit = 0, discending_digit = 0, temp;
    printf("Enter 8 digits (0-9) separated by spaces: ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &digits[i]);
        if (digits[i] < 0 || digits[i] > 9) {
            printf("Error: All inputs must be digits between 0 and 9.\n");
            return 1;
        }
    }
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (digits[i] > digits[j]) {
                temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        ascending_digit = ascending_digit * 10 + digits[i];
    }

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (digits[i] < digits[j]) {
                temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }
    for (int i = 0; i < 8; i++) {
        discending_digit = discending_digit * 10 + digits[i];
    }
    int difference = discending_digit - ascending_digit;
    printf("Smallest number: %d\n", ascending_digit);
    printf("Largest number: %d\n", discending_digit);
    printf("Difference: %d\n", difference);
    return 0;
}
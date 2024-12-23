#include <stdio.h>

int main () {
    int m, n, i, j, k, sum_even_nums = 0;

    // Prompt user for input
    printf("\nInput two integers (m, n):\n");

    // Read two integer values 'm' and 'n' from user
    scanf("%d %d", &m, &n);

    // Print a message indicating what the program will do
    printf("\nSum of %d even numbers starting from %d: ",n,m);

    // Loop to find and sum 'n' even numbers starting from 'm'
    for (k = 0, j = m; k < n; j++) {

        // Check if 'j' is even
        if (j % 2 == 0) {
            sum_even_nums += j; // Accumulate even numbers
            k++; // Increment the count of even numbers found
        }
    }

    // Print the sum of even numbers
    printf("\n%d", sum_even_nums);

    return 0; // End of program
}

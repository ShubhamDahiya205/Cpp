#include <stdio.h>

int main() {
    int n, sum = 0;

    // Taking input from the user
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Checking if n is a valid natural number
    if (n < 1) {
        printf("Please enter a natural number (n >= 1).\n");
    } else {
        // Using the formula: Sum = n * (n + 1) / 2
        sum = n * (n + 1) / 2;
        printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);
    }

    return 0;
}

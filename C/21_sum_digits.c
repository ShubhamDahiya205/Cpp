#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculating sum of digits
    while (num != 0) {
        digit = num % 10;  // Extract last digit
        sum += digit;      // Add it to sum
        num /= 10;         // Remove last digit
    }

    // Printing the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Checking if number is less than 2 (not prime)
    if (num < 2) {
        printf("%d is not a Prime number.\n", num);
    } else {
        // Checking divisibility from 2 to sqrt(num) for efficiency
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        // Printing result based on isPrime flag
        if (isPrime) {
            printf("%d is a Prime number.\n", num);
        } else {
            printf("%d is not a Prime number.\n", num);
        }
    }

    return 0;
}

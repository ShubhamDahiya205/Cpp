#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("%d is not a Prime number.\n", num);
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }
        if (isPrime) {
            printf("%d is a Prime number.\n", num);
        } else {
            printf("%d is not a Prime number.\n", num);
        }
    }

    return 0;
}

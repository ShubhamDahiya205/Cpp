#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1; // Using unsigned long long for large values

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handling negative numbers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculating factorial using a loop
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %llu\n", num, factorial);
    }

    return 0;
}

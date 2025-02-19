#include <stdio.h>

int main() {
    int i;

    // Printing even numbers
    printf("Even numbers from 1 to 100:\n");
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n\n"); // Adding space for better readability

    // Printing odd numbers
    printf("Odd numbers from 1 to 100:\n");
    for (i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n"); // Newline for clean output
    return 0;
}

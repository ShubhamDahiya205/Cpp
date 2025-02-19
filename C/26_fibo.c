#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // Taking input from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Handling cases where n is 1 or 2
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("Fibonacci Series: %d\n", first);
    } else {
        printf("Fibonacci Series: %d %d", first, second);
        for (i = 3; i <= n; i++) {
            next = first + second;
            printf(" %d", next);
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num, i;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Printing multiplication table from 1 to 10
    printf("Multiplication table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

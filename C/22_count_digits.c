#include <stdio.h>

int main() {
    int num, count = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handling the case when the number is 0
    if (num == 0) {
        count = 1;
    } else {
        // Counting digits by dividing the number by 10 in each step
        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    // Printing the result
    printf("Number of digits: %d\n", count);

    return 0;
}
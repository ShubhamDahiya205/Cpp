#include <stdio.h>

int main() {
    int year;

    // Taking input from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year conditions:
    // 1. Divisible by 400 (e.g., 2000, 2400) OR
    // 2. Divisible by 4 but not by 100 (e.g., 2004, 2024)
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;
}

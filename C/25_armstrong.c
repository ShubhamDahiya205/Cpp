#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, sum = 0, n = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Counting number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Calculating sum of digits raised to the power of n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    // Checking if the number is an Armstrong number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}

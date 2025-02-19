#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, digit;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // Storing the original number

    // Reversing the number
    while (num != 0) {
        digit = num % 10;               // Extract last digit
        reversedNum = reversedNum * 10 + digit; // Build reversed number
        num /= 10;                      // Remove last digit
    }

    // Checking if the original and reversed numbers are the same
    if (originalNum == reversedNum) {
        printf("%d is a Palindrome number.\n", originalNum);
    } else {
        printf("%d is not a Palindrome number.\n", originalNum);
    }

    return 0;
}

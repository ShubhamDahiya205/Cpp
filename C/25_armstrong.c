#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, sum = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }
    return 0;
}

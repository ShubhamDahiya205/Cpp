#include <stdio.h>

int main() {
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    if (a > b) {
        printf("%d is the largest number.\n", a);
    } else {
        printf("%d is the largest number.\n", b);
    }
    return 0;
}
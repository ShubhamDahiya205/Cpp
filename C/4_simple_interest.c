#include <stdio.h>
int main() {
    int p, t, r;
    float si;
    printf("Enter Principal amount : ");
    scanf("%d", &p);
    printf("Enter Time period : ");
    scanf("%d", &t);
    printf("Enter Rate of Interest per unit time : ");
    scanf("%d", &r);
    si = ( p * t * r )/100;
    printf("Value of Simple Interest is %f", si);
    return 0;
}
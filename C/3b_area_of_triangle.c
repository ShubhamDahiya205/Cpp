#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, s, ar;
    printf("Enter side 1 : ");
    scanf("%f", &a);
    printf("Enter side 2 : ");
    scanf("%f", &b);
    printf("Enter side 3 : ");
    scanf("%f", &c);
    s = ( a + b + c) /2;
    ar = sqrt(s * (s - a)* (s - b)* (s - c));
    printf("Area is : %f", ar);
    return 0;
}
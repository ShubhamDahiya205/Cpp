#include <stdio.h>
#define PI 3.14159265359
int main() {
    float radius, area;
    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area is %f", area);
    return 0;
}
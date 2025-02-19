#include <stdio.h>
int main(){
    float t;
    printf("Enter temperature in fahrenheit : ");
    scanf("%f", &t);
    t = (t- 32) * 5 / 9;
    printf("Temperature in celcius is : %f \n", t);
    printf("Enter temperature in celcius : ");
    scanf("%f", &t);
    t = (t * 9 / 5) + 32;
    printf("Temperature in fahrenheit is : %f \n", t);
    return 0;
}
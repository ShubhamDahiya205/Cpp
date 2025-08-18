#include <stdio.h>
#include <math.h>
#define e 0.001

float func(float x){
    float y = pow(x, 3) - 4*x - 9;
    return y;
}

int main(){
    float x0, x1, x2;
    int i = 0;

    up:
    printf("Enter x0 : ");
    scanf("%f", &x0);
    printf("Enter x1 : ");
    scanf("%f", &x1);

    if (func(x0)*func(x1) < 0){
        printf("The root lies between x0 and x1...\n");
    }
    else {
        printf("The root does not lie between x0 and x1...\n");
        printf("Input different values...\n");
        goto up;
    }

    do {
        x2 = (x0 + x1)/2;
        if ( func(x0)*func(x2) < 0){
            x1 = x2;
        } else {
            x0 = x2;
        }
        i++;
        printf("No. of iteration : %d\n", i);
        printf("Root : %f\n", x2);
        printf("Function value at current root : %f\n", func(x2));
        printf("%f", fabs(x0-x1));
    } while ((fabs(x0-x1)>=0.001) && (func(x2)!=0));
    return 0;
}
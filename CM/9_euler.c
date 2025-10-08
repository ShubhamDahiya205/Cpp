#include <stdio.h>
double f(double x, double y){
    return x+y;
}
int main(){
    printf("Euler Method\n");
    printf("Name : Kshitij Dahiya\n");
    printf("Section : 3C1\n");
    printf("Roll No : 030 1480 2724\n");
    
    double x0, y0, x, h;
    int n, i;

    printf("Enter the inital value of x (x0) : ");
    scanf("%lf", &x0);
    printf("Enter the inital value of y (y0) : ");
    scanf("%lf", &y0);
    printf("Enter the value of x at which y is required : ");
    scanf("%lf", &x);
    printf("Enter the step size (h) : ");
    scanf("%lf", &h);

    n = (int) ((x - x0)/h);
    printf("\nStep by Step Result \n");
    printf("Step\t x\t y\n");

    for (int i = 0; i < n; i++){
        printf("%d\t %0.4lf\t %0.4lf\n", i + 1, x0, y0);
        y0 = y0 + h*f(x0, y0);
        x0 = x0 + h;
    }

    printf("\nThe approximate value of y at x = %0.4lf is %0.4lf\n", x, y0);

    return 0;
}
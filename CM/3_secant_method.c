#include <stdio.h>
#include <math.h>
#define e 0.001

double func(double x){
    return (pow(x,3) - 4*x - 9);
}
double secant(double x0, double x1){
    double a=(x0*func(x1)) - (x1*func(x0));
    double b = func(x1) - func(x0);
    return a/b;
}
int main(){
    printf("Secant Method\n");
    printf("Name : Shubham Dahiya \nClass : CSE 3C1\n");
    printf("Roll No. : 00414802724\n");
    double x0, x1, x2, f0, f1, f2;
    int maxitr, count = 1;
    printf("Enter initial guess for x0 : ");
    scanf("%lf", &x0);
    printf("Enter initial guess for x1 : ");
    scanf("%lf", &x1);

    printf("Enter the maximum iterations : ");
    scanf("%d", &maxitr);

    while (count <= maxitr){
        f0 = func(x0);
        f1 = func(x1);
        x2 = ((x0*f1) - (x1*f0))/(f1-f0);
        if (fabs(x1-x0) < e){
            printf("\nRoot found at x = %lf", x1);
            break;
        }
        x0 = x1;
        x1 = x2;
        printf("\nIteration %d : x= %lf, f(x)= %lf", count, x1, f1);
        count++;
    }
    return 0;
}
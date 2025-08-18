#include <stdio.h>
#include <math.h>
#define EPSILON 0.0001

double func(double x){
    return (pow(x, 3) - 3*x - 5);
}

double dfunc(double x){
    return (3*pow(x, 2) - 3);
}

int main(){
    printf("\nName : Shubham Dahiya \nClass : C1\
           \nEnrollment No : 00314802724\n");
    printf("Newton Raphson Method \n\n");
    
    double x0, x1;
    int maxitr, i = 1;

    printf("Enter x0 : ");
    scanf("%lf", &x0);
    
    printf("The maximum number of iterations : ");
    scanf("%d", &maxitr);
    printf("\n");
    do{
        x1 = x0 - (func(x0)/dfunc(x0));
        if ((fabs(x1 - x0) < EPSILON) || (func(x1) == 0)){
            printf("Root found at x = %lf\n\n", x0);
            break;
        }
        x0 = x1;
        printf("Iteration %d : x = %lf, f(x) = %lf\n", i, x0, func(x0));
        i++;
    } while(i <= maxitr);

    if (i > maxitr){
        printf("Root not found within %d iterations\n\n", maxitr);
    }

    return 0;
}
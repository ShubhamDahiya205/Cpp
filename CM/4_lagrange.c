#include <stdio.h>
int main(){
    double x[100], y[100];
    int n;
    printf("Name : Shubham Dahiya\nClass : CSE 3C1\n");
    printf("Roll No. : 00414802724\n");
    printf("Lagrange Interpolation Method\n");
    printf("Enter the maximum number of points = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Value of x[%d] : ", i);
        scanf("%lf", &x[i]);
        printf("Value of y[%d] : ", i);
        scanf("%lf", &y[i]);
    }

    double xi, term, result = 0.0;
    printf("Enter the value where interpolated value is to be found : ");
    scanf("%lf", &xi);

    for (int i = 0; i<n; i++){
        term = y[i];
        for (int j = 0; j < n; j++){
            if (i != j){
                term *= (xi - x[j])/(x[i]-x[j]);
            }
        }
        result += term;
    }
    printf("Interpolated Value at x = %lf is y : %lf", xi, result);
    printf("\nInterpolated Polynomial :- ");
    printf("\nP(x) = ");

    for (int i = 0; i < n; i++){
        printf("(%lf)", y[i]);
        for (int j = 0; j < n; j++){
            if (i != j){
                printf("* (x-%lf)/(%lf-%lf)", x[j], x[i], x[j]);
            }
        }
        if (i < n - 1){
            printf("+");
        }
    }
    printf("\n");
    return 0;
}
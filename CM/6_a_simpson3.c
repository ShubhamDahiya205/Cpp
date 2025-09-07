#include <stdio.h>
#include <math.h>
double f(double x){
    return 1/(x*x + 1);
}
int main(){
    printf("Simpson's 1/3rd Formula\n");
    printf("Name  : Shubham Dahiya\n");
    printf("Class : 3C1\n");
    printf("Roll  : 004 1480 2424\n");
    double a, b, h, sum, integ;
    unsigned n;
    printf("\nEnter the value of lower limit : ");
    scanf("%lf", &a);
    printf("Enter the value of upper limit : ");
    scanf("%lf", &b);
    printf("\nNumber of sub intervals {must be even}: ");
    scanf("%d", &n);
    h = (b - a)/n;
    sum = f(a) + f(b);
    for (int i = 1; i < n; i++){
        double x = a + i*h;
        if (i%2 == 0){
            sum += 2*f(x);
        } else {
            sum += 4*f(x);
        }
    }
    integ = (h*sum)/3.0;
    printf("\nRequired Integration = %0.2lf", integ);
    return 0;
}
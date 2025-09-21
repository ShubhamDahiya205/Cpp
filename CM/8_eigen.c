#include <stdio.h>
#include <math.h>

#define MAX 10
#define EPSILON 0.0001  // Tolerance for convergence

void multiplyMatrixVector(float matrix[MAX][MAX], float vector[MAX], float result[MAX], int n) {
    for (int i = 0; i < n; i++) {
        result[i] = 0;
        for (int j = 0; j < n; j++) {
            result[i] += matrix[i][j] * vector[j];
        }
    }
}

float getMaxValue(float vector[MAX], int n) {
    float max = fabs(vector[0]);
    for (int i = 1; i < n; i++) {
        if (fabs(vector[i]) > max)
            max = fabs(vector[i]);
    }
    return max;
}

int main() {
    int n, i, j;
    float A[MAX][MAX], x[MAX], y[MAX], lambda_old = 0.0, lambda_new;
    float error;
    printf("Power Method to find Eigen Values\n");
    printf("Name : Shubham Dahiya\n");
    printf("Class : 3C1\n");
    printf("Roll No. : 004 1480 2724\n");
    // Input
    printf("Enter the order of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of matrix A (%d x %d):\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%f", &A[i][j]);

    // Initial guess for eigenvector
    printf("Enter the initial guess vector x (size %d):\n", n);
    for (i = 0; i < n; i++)
        scanf("%f", &x[i]);

    int iteration = 0;

    do {
        iteration++;
        // Multiply A*x
        multiplyMatrixVector(A, x, y, n);

        // Compute new eigenvalue (lambda)
        lambda_new = getMaxValue(y, n);

        // Normalize y to get next x
        for (i = 0; i < n; i++)
            x[i] = y[i] / lambda_new;

        // Check for convergence
        error = fabs(lambda_new - lambda_old);
        lambda_old = lambda_new;

    } while (error > EPSILON);

    // Output
    printf("\nAfter %d iterations:\n", iteration);
    printf("Dominant Eigenvalue = %.6f\n", lambda_new);
    printf("Corresponding Eigenvector:\n");
    for (i = 0; i < n; i++)
        printf("x[%d] = %.6f\n", i, x[i]);

    return 0;
}
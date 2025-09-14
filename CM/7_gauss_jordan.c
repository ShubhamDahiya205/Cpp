#include <stdio.h>
#define N 3

int main(){
    float a[N][N + 1];
    float ratio;
    printf("Gauss Jordan Method\n");
    printf("Name  : Shubham Dahiya\n");
    printf("Class : 3C1\n");
    printf("Roll  : 004 1480 2424\n");

    printf("Enter the elements of the augmented matrix row-wise : \n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N + 1; j++){
            scanf("%f", &a[i][j]);
        }
    }

    for (int i = 0; i < N; i++){
        float pivot = a[i][i];
        for (int j = 0; j < N + 1; j++){
            a[i][j] /= pivot;
        }

        for (int k = 0; k < N; k++){
            if (k != i){
                ratio = a[k][i];
                for (int j = 0; j < N + 1; j++){
                    a[k][j] -= ratio*a[i][j]; 
                }
            }
        }
    }
    printf("The diagonal Matrix is : \n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N + 1; j++){
            printf("%0.2f   ", a[i][j]);
        }
        printf("\n");
    }
    printf("The solution is : \n");
    for (int i = 0; i < N; i++){
        printf("x[%d] = %0.2f\n", i + 1, a[i][N]);
    }
    return 0;    
}
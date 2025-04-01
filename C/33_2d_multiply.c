#include <stdio.h>
int main(){
    int arr1[3][3] = { {1, 2, 3},
                       {2, 3, 4},
                       {3, 4, 5}  };
    int arr2[3][3] = { {3, 2, 1},
                       {4, 3, 2},
                       {5, 4, 3}  };
    int p = sizeof(arr1)/sizeof(arr1[0]), q = sizeof(arr1[0])/sizeof(arr1[0][0]);
    int r = sizeof(arr2)/sizeof(arr2[0]), s = sizeof(arr2[0])/sizeof(arr2[0][0]);
    int element = 0;

    printf("Array 1 : {\n");
    for (int i = 0; i < p; i++){
        printf("{");
        for (int j = 0; j < q; j++){
            printf(" %d", arr1[i][j]);
        }
        printf(" }\n");
    }
    printf("}\n");
    
    printf("Array 2 : {\n");
    for (int i = 0; i < r; i++){
        printf("{");
        for (int j = 0; j < s; j++){
            printf(" %d", arr2[i][j]);
        }
        printf(" }\n");
    }
    printf("}\n");
    
    if (q != r){
        printf("Multiplication Not Possible.\n");
    } else {
        int arr3[p][s];
        for (int i = 0; i < p; i++){
            for (int k = 0; k < s; k++){
                element = 0;
                for (int j = 0; j < q; j++){
                    element += arr1[i][j] * arr2[j][k];
                }
                arr3[i][k] = element;
            }
        }      
        printf("Matrix Multiplication of Array 1 and Array 2\n");
        printf("Result : {\n");
        for (int i = 0; i < p; i++){
            printf("{");
            for (int j = 0; j < s; j++){
                printf(" %d", arr3[i][j]);
            }
            printf(" }\n");
        }
        printf("}\n");
    }    
    
    return 0;
}
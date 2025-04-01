#include <stdio.h>
int main(){
    int arr[3][3] = { {1, 2, 3},
                      {2, 3, 4},
                      {3, 4, 5}};
    int rows = sizeof(arr)/sizeof(arr[0]);
    int columns = sizeof(arr[0])/sizeof(arr[0][0]);
    int sum = 0;
    printf("Array : {\n");
    for (int i = 0; i < rows; i++){
        printf("{");
        for (int j = 0; j < columns; j++){
            printf(" %d,", arr[i][j]);
            sum += arr[i][j];
        }
        printf("}\n");
    } 
    printf("}\n");
    printf("Sum = %d\n", sum);    
    return 0;
}
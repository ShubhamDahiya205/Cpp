#include <stdio.h>
int main(){
    int arr[] = {10, -10, 3, 0, -4, 0, 5};
    int p = 0, n = 0, z = 0;
    printf("Array : {");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf(" %d", arr[i]);
        if (arr[i] > 0){ p++;}
        else if (arr[i] < 0){ n++;}
        else { z++;}
    }
    printf(" }\n");
    printf("Number of positive elements : %d\n", p);
    printf("Number of zero elements : %d\n", z);
    printf("Number of negative elements : %d\n", n);
    return 0;
}
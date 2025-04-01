#include <stdio.h>
int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    printf("Array : {");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf(" %d", arr[i]);
        sum += arr[i];
    }
    printf(" }\n");
    printf("Sum = %d\n", sum);
    return 0;
}
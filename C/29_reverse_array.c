#include <stdio.h>
int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int l = sizeof(arr)/sizeof(arr[0]);
    int rev[l];
    printf("Array : {");
    for (int i = 0; i < l; i++){
        printf(" %d", arr[i]);
        rev[i] = arr[l - i - 1];
    }
    printf(" }\n");
    printf("Reverse : {");
    for (int i = 0; i < l; i++){
        printf(" %d", rev[i]);
    }
    printf(" }\n");
    return 0;
}
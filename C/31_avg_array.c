#include <stdio.h>
int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0, l = sizeof(arr)/sizeof(arr[0]);
    float avg = 0;
    printf("Array : {");
    for (int i = 0; i < l; i++){
        printf(" %d", arr[i]);
        sum += arr[i];
    }
    printf(" }\n");
    avg = sum/(float)l;
    printf("Average of Elements = %f\n", avg);
    return 0;
}
#include <stdio.h>
int main(){
    int arr[] = { 11, 22, 3, 5, 8, 33};
    int lg = arr[0], sm = arr[0];
    printf("Array : {");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf(" %d", arr[i]);
        if (arr[i] < sm){
            sm = arr[i];
        }
        if (arr[i] > lg){
            lg = arr[i];
        }
    }
    printf(" }\n");
    printf("The largest number is %d\n", lg);
    printf("The smallest number is %d\n", sm);
    return 0;
}
#include <stdio.h>

int main(){
    int l = 0;
    printf("Enter length of Array : ");
    scanf("%d", &l);
    
    int arr[l];
    for (int i = 0; i < l; i++){
        printf("Enter Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int temp;
    printf("Sorting the array using Bubble Sort.\n");
    for (int i = 0; i < l - 1; i++){
        for (int j = 0; j < l - i - 1; j++){
            if (arr[j + 1] < arr[j]){
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr [j]    = temp;
            }
        }
    }

    printf("Sorted Array : {");
    for (int i = 0; i < l; i++){
        printf(" %d", arr[i]);
    }
    printf("}\n");
    return 0;
}

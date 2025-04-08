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
    printf("Sorting the array using Insertion Sort.\n");
    for (int i = 0; i < l - 1; i++){
        for (int j = i + 1; j > 0; j--){
            if (arr[j] < arr[j - 1]){
                temp          = arr[j];
                arr[j]        = arr[j - 1];
                arr [j - 1]   = temp;
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

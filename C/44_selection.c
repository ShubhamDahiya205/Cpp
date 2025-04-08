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

    int temp, ind;
    printf("Sorting the array using Selection Sort.\n");
    for (int i = 0; i < l - 1; i++){
        ind = i;
        for (int j = i; j < l; j++){
            if (arr[j] < arr[ind]){
                ind = j;
            }
        }
        temp = arr[ind];
        arr[ind] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted Array : {");
    for (int i = 0; i < l; i++){
        printf(" %d", arr[i]);
    }
    printf("}\n");
    return 0;
}

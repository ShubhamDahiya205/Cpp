#include <stdio.h>

int main(){
    int el, l = 0, found = 0;
    printf("Enter length of Array : ");
    scanf("%d", &l);
    
    int arr[l];
    for (int i = 0; i < l; i++){
        printf("Enter Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter Element to Search : ");
    scanf("%d", &el);

    for (int i = 0; i < l; i++){
        if (arr[i] == el){
            found = i + 1;
            break;
        }
    }
    if (found){
        printf("Element found at position %d.\n", found);
    } else {
        printf("Element not found.\n");
    }
    return 0;
}

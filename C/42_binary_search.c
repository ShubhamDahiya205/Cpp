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

    int st = 0, end = l, mid = (st + end)/2;

    while (st <= end){
        mid = (st + end)/2;
        if (arr[mid] == el){
            found = mid + 1;
            break;
        } else if (arr[mid] > el){
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    if (found){
        printf("Element found at position %d.\n", found);
    } else {
        printf("Element not found.\n");
    }
    return 0;
}

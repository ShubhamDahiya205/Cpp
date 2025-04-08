#include <stdio.h>
#include <string.h>

int main(){
    char str1[50], str2[50];
    int check = 1;

    printf("Enter string 1: ");
    fgets(str1, 50, stdin);
    
    printf("Enter string 2: ");
    fgets(str2, 50, stdin);

    int l1 = strlen(str1), l2 = strlen(str2);
    
    if (l1 != l2){
        check = 0;
    } else {
        for (int i = 0; i < l1; i++){
            if (str1[i] != str2[i]){
                check = 0;
                break;
            }
        }
    }
    if (check){
        printf("The strings are same.\n");
    } else {
        printf("The strings are different.\n");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
    char str1[50];
    printf("Enter string 1 : ");
    fgets(str1, 50, stdin);
    
    int l = strlen(str1);
    
    char rev[l];
    for (int i = 0; i < l; i++){
        rev[i] = str1[l - i - 1];
    }
    rev[l] = '\0';
    printf("Reversed String : %s", rev);
    return 0;
}
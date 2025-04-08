#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    printf("Enter string 1 : ");
    fgets(str1, 50, stdin);
    int l = strlen(str1);
    char str2[l];
    for (int i = 0; i <= l; i++){
        str2[i] = str1[i];
    }
    printf("String 2 : %s", str2);
    return 0;
}
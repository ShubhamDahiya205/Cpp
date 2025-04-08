#include <stdio.h>

int main(){
    char str[50];
    int l = 0;
    printf("Enter the string : ");
    fgets(str, 50, stdin);
    for (int i = 0; str[i] != '\0'; i++){
        l++;
    }
    printf("Length of string is %d", l);
    return 0;
}
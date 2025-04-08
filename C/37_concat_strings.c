#include <stdio.h>
#include <string.h>

int main(){
    char str1[50] = "Hello", str2[50];
    printf("String 1 : %s\n", str1);
    
    printf("Enter string 2 : ");
    fgets(str2, 50, stdin);

    strcat(str1, str2);
    printf("Concatinated String : %s", str1);
    return 0;
}
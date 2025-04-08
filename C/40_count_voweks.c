#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    int vow = 0, s = 0; 
    printf("Enter String : ");
    fgets(str1, 50, stdin);
    
    for (int i = 0; i < strlen(str1); i++){
        if (str1[i] == ' '){ s++;
        } else if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u'){
            vow++;
        }
    }
    printf("Number of Vowels : %d\n", vow);
    printf("Number of Spaces : %d\n", s);
    return 0;
}
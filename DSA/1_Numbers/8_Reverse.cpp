#include <bits\stdc++.h>

using std::cin, std::cout;

int main() {
    int x = -9432;
    int rev = 0;
    int n = x;
    while (n != 0) {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    if (rev < -2147483648 || rev > 2147483647){ rev = 0;}
    cout << rev;
}
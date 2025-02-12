// Reverse a digit, don't include zeroes in the beginning (2500 => 52)
#include <bits\stdc++.h>
using namespace std;

// Time Complexity : O(log10(n))
int reverse_digit(int n){
    int m = 0;
    while (n > 0){
        m = (m * 10) + (n % 10);
        n = n / 10;
    }
    return m;
}
int main(){
    int n;
    cout << "Enter a Number : ";
    cin >>  n;
    cout << "Reversed number : " << reverse_digit(n) << '\n';
    return 0;
}
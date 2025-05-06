// Check if number is palindrome or not

// Either check : reverse = original or like a string ( index[0] == index[-1])....
#include <bits\stdc++.h>
using namespace std;

// Time Complexity : O(log10(n))

bool isPalindrome(int x) {
    if (x < 0) {return false;}
    long long rev = 0;
    int n = x;
    while ( n!= 0 ){
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    return (x == rev);
}

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    (isPalindrome(n)) ? cout << "Palindrome\n" : cout << "Not a palindrome\n";
    return 0;
}
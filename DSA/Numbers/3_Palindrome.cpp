// Check if number is palindrome or not

// Either check : reverse = original or like a string ( index[0] == index[-1])....
#include <bits\stdc++.h>
using namespace std;

// Time Complexity : O(log10(n))
bool palindrome_check(int n){
    int origianl = n;
    int m = 0;
    while (n > 0){
        m = (m * 10) + (n % 10);
        n = n / 10;
    }
    return (origianl == m);
}

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    (palindrome_check(n)) ? cout << "Palindrome\n" : cout << "Not a palindrome\n";
    return 0;
}
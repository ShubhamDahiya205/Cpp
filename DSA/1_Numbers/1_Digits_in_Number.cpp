// Count number of digits in a number
#include <bits\stdc++.h>
using namespace std;

// Time Complexity : log10(n)
int count_digits(int n){        
    int digits = 0;
    while (n > 0){
        n = n/10;
        digits++;
    }
    return digits;
}

// Time Complexity : O(1)
int count_digits_log(int n){
    return log10(n) + 1;
}
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Number of digits : " << (count_digits(n)) << '\n';
    cout << "Number of digits : " << (count_digits_log(n)) << '\n';
    return 0;
}
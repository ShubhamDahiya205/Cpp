// Check if a number is armstrong number (123 == 1cube + 2cube + 3cube)
#include <bits\stdc++.h>
using namespace std;

// Time Complexity : O(log10(n))
bool armstrong_check(int n){
    int original = n;
    int sum = 0;
    while (n > 0){
        sum += pow((n % 10), 3);
        n /= 10;
    }
    return sum == original;
}

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    (armstrong_check(n)) ? cout << "Armstrong Number" : cout << "Not an armstrong number";
    return 0;
}
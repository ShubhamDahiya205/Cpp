// Given a positive integer n, count the number of digits in n that divide n evenly 
// (i.e., without leaving a remainder). 
// Return the total number of such digits.

#include <bits\stdc++.h>

using std::cout, std::cin;

int main(){
    int n = 12304;
    int num = n;
    int d, count = 0;
    while (num!=0){
        d = num % 10;
        num /= 10;
        if (d!= 0 && n % d == 0){
            count++;
        }
    }
    cout << count;
    return count;
}
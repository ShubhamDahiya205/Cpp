// Print all divisors of the give number

#include <bits\stdc++.h>
using namespace std;

// Time complexity : O(n)
void divisors(int n){
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            cout << i << " ";
        }
    }
    cout << '\n';
}

// concept used : root 42 = 6.42... , (1, 42), (2, 21), (3, 14), (6, 7)
// Time complexity : O(n^1/2)
void divisors2(int n){
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            cout << i << ' ';
            if (n/i != i){
                cout << n/i << ' ';
            }
        }
    }
    cout << '\n';
}
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    divisors(n);    
    divisors2(n);    
    return 0;
}
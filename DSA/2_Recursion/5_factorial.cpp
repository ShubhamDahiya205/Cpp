#include <bits\stdc++.h>
using namespace std;

int fact1(int);
int fact2(int, int);
int fact3(int);

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    
    cout << fact1(n) << '\n';
    cout << fact2(n, 1) << '\n';
    cout << fact3(n) << '\n';
    return 0;
}

int fact1(int n){
    int fact = 1;
    for (int i = 2; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int fact2(int n, int fact){
    if (n <= 1) return fact;
    fact *= n;
    return fact2(n - 1, fact);
}
int fact3(int n){
    if (n <= 1) return 1;
    return n * fact3(n - 1);
}
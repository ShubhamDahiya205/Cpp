#include <bits\stdc++.h>
using namespace std;

void fibo1(int);
int fibo2(int);

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    fibo1(n); 
    cout << '\n';
    cout << fibo2(n); 
    return 0;
}

void fibo1(int n){
    int a = 0, b = 1, c;
    cout << a << ' ';
    if (n == 0) return;
    cout << b << ' ';
    for (int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
        cout << c << ' ';
    }
}

int fibo2(int n){
    if (n  == 0  || n == 1){
        return n;
    }
    return fibo2(n - 1) + fibo2(n - 2);
    
}


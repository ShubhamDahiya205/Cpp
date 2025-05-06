#include <bits\stdc++.h>
using namespace std;

void print(int, int);

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    print(n, n);

    return 0;
}

void print(int i, int n){
    if (i <= 0) return;
    cout << i << '\n';
    print(i - 1, n); 
}
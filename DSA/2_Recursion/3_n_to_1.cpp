#include <bits\stdc++.h>
using namespace std;

void print(int, int);
void nums2(int);

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    print(n, n);
    nums2(n);
    return 0;
}

void print(int i, int n){
    if (i <= 0) return;
    cout << i << '\n';
    print(i - 1, n); 
}

void nums2(int n){
    if (n == 1){
        cout << n << '\n';
        return;
    } else {
        cout << n << '\n';
        nums2(n-1);
        return;
    }
}
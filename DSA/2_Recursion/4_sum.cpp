#include <bits\stdc++.h>
using namespace std;

int sum1(int);
int sum2(int);
int sum3(int, int);
int sum4(int);

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    sum1(n);
    sum2(n);
    sum3(n, 0);
    cout << sum4(n);
    return 0;
}

int sum1(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum << '\n';
    return sum;
}
int sum2(int n){
    int sum = n * (n + 1) / 2;
    cout << sum << '\n';
    return sum;   
}
int sum3(int i, int sum){
    if (i < 1){
        cout << sum << '\n';
        return sum;
    }
    sum += i;
    return sum3(i - 1, sum);
}
int sum4(int n){
    if (n < 1){
        return 0;
    }
    return n + sum4(n - 1);
}
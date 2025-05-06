#include <bits\stdc++.h>
using namespace std;

// Time : O(n), Space : O(n)
void nums(int, int);

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    nums(1, n);

    return 0;
}

void nums(int i, int n){
    if (i > n) return;
    cout << i << '\n';
    nums(i + 1, n);
}
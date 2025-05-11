#include <bits\stdc++.h>
using namespace std;

// Time : O(n), Space : O(n)
void nums(int, int);
void nums2(int);

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    nums(1, n);
    nums2(n);

    return 0;
}

void nums(int i, int n){
    if (i > n) return;
    cout << i << '\n';
    nums(i + 1, n);
}
void nums2(int n){
    if (n == 1){
        cout << n << '\n';
        return;
    } else {
        nums2(n-1);
        cout << n << '\n';
        return;
    }
}
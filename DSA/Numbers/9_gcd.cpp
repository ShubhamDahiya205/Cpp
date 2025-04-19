#include <bits\stdc++.h>

int gcd1(int, int);
int gcd2(int, int);

using std::cout, std::cin;

int main(){
    int x, y;
    cout << "Enter No. 1 : ";
    cin >> x;
    cout << "Enter No. 2 : ";
    cin >> y;
    cout << gcd1(x, y) << '\n';
    cout << gcd2(x, y) << '\n';
    return 0;
}   

int gcd1(int x, int y){
    int gcd;
    int small, large;
    if (x > y){
        small = y;
        large = x;
    } else {
        small = x;
        large = y;
    }
    for (int i = small; i >= 1; i--){
        if ((small % i == 0) && (large % i == 0)){
            gcd = i;
            break;
        }
    }
    return gcd;
}

int gcd2(int x, int y){
    int gcd;
    int small, large, temp;
    if (x > y){
        small = y;
        large = x;
    } else {
        small = x;
        large = y;
    }
    while (large % small != 0){
        large = large - small;
        if (small > large){
            temp = small;
            small = large;
            large = temp;
        }
    }
    gcd = small;
    return gcd;
}
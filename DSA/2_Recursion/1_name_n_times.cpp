#include <bits\stdc++.h>
using namespace std;

// Time : O(n) , Space : O(n)
void print1(int, string);
void print2(int, int, string);

int main(){
    string name;
    int n;
    cout << "Enter your Name : ";
    cin >> name;
    cout << "Enter value of n : ";
    cin >> n;

    print1(n, name);
    print2(1, n, name);
    return 0;
}

void print1(int n, string name){
    if (!n) return;
    cout << name << '\n';
    print1(n - 1, name);
    return;

}

void print2(int i, int n, string name){
    if (i > n) return;
    cout << name << '\n';
    print2(i + 1, n, name);
}
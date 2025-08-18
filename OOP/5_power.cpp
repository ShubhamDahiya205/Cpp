#include <iostream>
using namespace std;
double power(double m, int n=2);
int main() {
    double m;
    int n;
    cout << "\nPower Function\n\n";
    cout << "Enter the base : "; 
    cin >> m;
    cout << "Enter the power (-1 to skip) : "; 
    cin >> n;
    double result;
    if (n == -1){
        result = power(m);
    } else {
        result = power(m, n);
    }
    cout << "\nResult : " << result;
    cout << "\nBy - Shubham Dahiya (00414802724)" << '\n';
    return 0;
}
double power(double m, int n){
    double result = 1;
    while (n > 0){
        result *= m; 
        n--;
    }
    return result;
}
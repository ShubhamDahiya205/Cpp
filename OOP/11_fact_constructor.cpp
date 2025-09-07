// Factorial using Constructor
#include <iostream>
using namespace std;
class Factorial{
    int n;
    int fact = 1;
public:
    Factorial(int x) : n(x){
        while (x){
            fact *= x;
            x--;
        }
        cout << "Factorial of " << n << " is : " << fact << '\n';
    }
};
int main() {
    int x1, x2;
    cout << "Factorial Using Constructor\n";
    cout << "Enter the number : ";
    cin >> x1;
    Factorial f1(x1);
    cout << "\nEnter the number : ";
    cin >> x2;
    Factorial f2(x2);
    cout << "\nBy Shubham Dahiya(00414802724)";
    return 0;
}
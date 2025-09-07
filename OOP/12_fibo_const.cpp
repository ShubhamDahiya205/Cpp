//Fibonacci Using Constructor
#include <iostream>
using namespace std;
class Fibonacci{
    int a = 0;
    int b = 1;
    int c;
    int n;
public:
    Fibonacci(int num){
        n = num;
    }
    Fibonacci(const Fibonacci& f2){
        n = f2.n;
    }
    void print(){
        cout << "Fibonacci Series : \n";
        cout << a << " " << b << " ";
        for (int i = 1; i <= n; i++){
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
};
int main() {
    int x1, x2;
    cout << "\nFibonacci Series\n";
    cout << "Enter number of elements : ";
    cin >> x1;
    Fibonacci f1(x1);
    cout << "\nConstructing another instance using copy constructor.\n";
    Fibonacci f2(f1);
    f2.print();
    cout << "\n\nBy Shubham Dahiya(00414802724)";
    return 0;
}
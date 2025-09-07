#include <iostream>
using namespace std;
class B;
class A{
    int x;
public:
    void set(){
        cout << "Enter x : ";
        cin >> x;
    }
    void get(){cout << "x = " << x << '\n';}
    friend void greatest(A, B);
};
class B{
    int y;
public:
    void set(){
        cout << "Enter y : ";
        cin >> y;
    }
    void get(){cout << "y = " << y << '\n';}
    friend void greatest(A, B);
};
void greatest(A a, B b){
    if (a.x >= b.y){
        cout << a.x << " is the greatest number.\n";
    } else {
        cout << b.y << " is the greatest number.\n";
    }
}
int main() {
    A a;
    B b;
    a.set(); 
    b.set();
    a.get();
    b.get();
    greatest(a, b);
    cout << "\n\nBy : Shubham Dahiya (00414802724)";
    return 0;
}
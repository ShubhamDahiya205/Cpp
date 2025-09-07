// complex no.
#include <iostream>
using namespace std;
class Complex{
    float real;
    float img;
public:
    Complex() : real(0), img(0){}
    Complex(float x) : real(x), img(x){}
    Complex(float x, float y) : real(x), img(y){}
    float get_real(){
        return real;
    }
    float get_img(){
        return img;
    }
    void add(Complex c1){
        real += c1.get_real();
        img += c1.get_img();
    }
    void read(){
        cout << real << " + " << img <<"i\n";
    }
};
int main() {
    cout << "\nComplex Number\n";
    Complex c1;
    Complex c2(5);
    Complex c3(1, 2);
    cout << "First Complex Number : ";
    c1.read();
    cout << "Second Complex Number : ";
    c2.read();
    cout << "Third Complex Number : ";
    c3.read();
    c3.add(c2);
    cout << "Adding 2nd and 3rd complex number : ";
    c3.read();
    cout << "\n\nBy Shubham Dahiya (00414802724)";
    return 0;
}
#include <iostream>
using namespace std;
class Complex{
    float real;
    float img;
public:
    Complex(float x, float y) : real(x), img(y){}
    float get_real(){
        return real;
    }
    float get_img(){
        return img;
    }
    Complex operator ++(int){
        Complex temp = *this;
        real++;
        img++;
        return temp;
    }
    void read(){
        cout << real << " + " << img <<"i\n";
    }
};
int main() {
    cout << "\nComplex Number\n";
    int x, y;
    cout << "Enter real value : ";
    cin >> x;
    cout << "Enter imaginary value : ";
    cin >> y;
    Complex c1(x, y);
    cout << "Complex Number : ";
    c1.read();
    cout << "After C1++ : ";
    c1++;
    c1.read();
    cout << "\nBy Shubham Dahiya (00414802724)";
    return 0;
}
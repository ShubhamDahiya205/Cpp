#include <iostream>
using namespace std;
class Numbers{
    int a, b, c;
public:
    void set(){
        cout << "Enter 1st Number : ";
        cin >> a;
        cout << "Enter 2nd Number : ";
        cin >> b;
        cout << "Enter 3rd Number : ";
        cin >> c;
    }
    friend int max_number(Numbers);
};
int max_number(Numbers num){
    int a = num.a, b = num.b, c = num.c;
    if ((a >= b) && (a >= c)){
        return a;
    }
    else if ((b >= c) && (b >= a)){
        return b;
    }
    else {
        return c;
    }
}
int main() {
    Numbers num;
    num.set();
    cout << "\nThe greatest number among them is " << max_number(num);
    cout << "\n\nBy : Shubham Dahiya (00414802724)";
    return 0;
}
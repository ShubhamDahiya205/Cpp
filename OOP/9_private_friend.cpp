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
    }
    friend int sum(Numbers);
    friend void display(Numbers);
};
int sum(Numbers num){
    return (num.a + num.b);
}
void display(Numbers num){
    cout << "\nAccessed using Friend Function \n";
    cout << "First Number : " << num.a << '\n';
    cout << "Second Number : " << num.b << '\n';
    cout << "Sum : " << sum(num) << '\n';
};
int main() {
    Numbers num;
    num.set();
    display(num);
    cout << "\n\nBy : Shubham Dahiya (00414802724)";
    return 0;
}
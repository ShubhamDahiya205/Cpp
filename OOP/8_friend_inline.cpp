#include <iostream>
using namespace std;
class Person{
    int age;
public:
    void get_age(){
        cout << "Current Age : " << age << '\n';
    };
    void set_age(int a){
        age = a;
    };
    friend void change_age(Person, int);
};
inline void change_age(Person p1, int new_age){
    cout << "Age changed from " << p1.age << " to " << new_age;
    p1.age = new_age;
}
int main() {
    Person p1;
    int a;
    p1.set_age(17);
    p1.get_age();
    cout << "Enter the new age : ";
    cin >> a;
    change_age(p1, a);
    cout << "\n\nBy : Shubham Dahiya (00414802724)";
    return 0;
}
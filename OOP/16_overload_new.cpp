#include <iostream>
using namespace std;
class Number{
    int data;
public:
    Number(int v) : data(v){
        cout << "Constructor called for "<< v << '\n';
    }
    ~Number(){
        cout << "Destructor called for " << data << '\n';
    }
    void* operator new(size_t size){
        cout << "Custom new operator called.\n";
        void* p = malloc(size);
        if (!p){
            throw bad_alloc();
        }
        return p;
    }
    void operator delete(void* p){
        cout << "Custom delete called.\n";
        free(p);
    }
};
int main() {
    int n;
    cout << "Overloading new and delete Operator :\n";
    cout << "Enter a number : ";
    cin >> n;
    Number* num = new Number(n);
    delete num;
    cout << "\nShubham Dahiya (004 1480 2724)";
    return 0;
}
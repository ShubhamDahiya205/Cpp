#include <iostream>
using namespace std;

class Shirt {
    static int count;
    char size;
public:
    Shirt(char c) : size(c) {
        count++;
        cout << "New Shirt Object Created.\n"; 
        cout << "Size : " << size << '\n';
        cout << "Active Objects: " << count << "\n\n"; 
    }
    ~Shirt() {
        count--;
        cout << "\nObject of Size " << size << " was destroyed.\n";
        cout << "Active Objects: " << count << "\n\n"; 
    }
};

int Shirt::count = 0;

int main() {
    int n1, n2;
    char s1, s2;

    cout << "Enter shirt1 size (S/M/L): ";
    cin >> s1;

    Shirt sh1(s1);   
    cout << "Enter shirt2 size (S/M/L): ";
    cin >> s2;

    {
        Shirt sh2(s2);
    }

    cout << "\nBack in main. Program ending.\n";
    return 0;
}

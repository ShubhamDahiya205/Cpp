#include <iostream>

void swap(std::string &x, std::string &y);

int main() {
    std::string x = "This X";
    std::string y = "Y This";
    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";
    swap(x, y);
    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";
    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp = x;
    x = y;
    y = temp;
}
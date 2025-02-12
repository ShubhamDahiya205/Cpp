#include <iostream>
#include <cmath>
int main() {
    double side1, side2, hyp;
    std::cout << "Get Length of Hypotenuse" << "\n";
    std::cout << "Length of side 1 ";
    std::cin >> side1;
    std::cout << "Length of side 2 ";
    std::cin >> side2;
    hyp = sqrt(pow(side1, 2) + pow(side2, 2));
    std::cout << "Hypotenuse " << hyp << "\n";
    return 0;
}
#include <iostream>
#include <string>

int main() {
    const int SIZE = 5;
    std::string array[SIZE];
    std::string element;
    int count = 0;

    for (int i = 0; i < SIZE; i++ ){
        std::cout << "Enter food item or 'q' to exit #" << (i + 1) << ": ";
        std::getline(std::cin , element);
        if (element == "q") {
            break;
        }
        array[i] = element;
        count++;
    }
    for (int i = 0; i < count; i++){
        std::cout << array[i] << "\n";
    }
    return 0;
}
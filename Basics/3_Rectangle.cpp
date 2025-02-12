#include <iostream>
#include <limits>           // // For std::numeric_limits
int main() {
    int h, w;
    do {
        std::cout << "Enter Height: ";
        if (!(std::cin >> h)) { // Check if input fails
            std::cin.clear(); // Clear the error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a numeric value.\n";
            continue; // Restart the loop
        }

        std::cout << "Enter Width: ";
        if (!(std::cin >> w)) { // Check if input fails
            std::cin.clear(); // Clear the error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a numeric value.\n";
            continue; // Restart the loop
        }

        if (h < 2 || w < 3) {
            std::cout << "Height must be >= 2 and Width must be >= 3. Try again.\n";
        }
    } while (h < 2 || w < 3);

    for (int i = 0; i < w; i++){
        std::cout << "*";
    }
    for (int j = 0; j < h-2; j++){
        std::cout << "\n*";
            for (int i = 0; i < w-2; i++){
             std::cout << " ";
           }   
        std::cout << "*";
    }
    std::cout << "\n";
    for (int i = 0; i < w; i++){
        std::cout << "*";
    }
    std::cout << "\n\n";
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < w; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
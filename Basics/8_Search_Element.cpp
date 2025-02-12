#include <iostream>
#include <limits>

int search(int numbers[],const int LENGTH,const int element);

int main(){
    int element;
    int numbers[] = {1, 2, 3, 4 , 5, 6, 7, 8, 9};
    do {
        std::cout << "Enter element to search : ";
        std::cin >> element;
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        break;
     } while (true);
     int result = search(numbers, sizeof(numbers)/sizeof(numbers[0]), element);
     if (result != -1) {
        std::cout << element << " was found at index " << result << "\n";
     }  else {
        std::cout << element << " was not found." << "\n";
     }
    return 0;
}

int search(int numbers[], int LENGTH, int element){
    for (int i = 0; i < LENGTH; i++){
        if (numbers[i] == element){
            return i;
        }
    }
    return -1;
};
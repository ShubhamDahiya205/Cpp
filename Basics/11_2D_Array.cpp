#include <iostream>

int main() {
    int array[ ][3] = {{1, 2, 3},
                       {1, 2, 3},
                       {1, 2, 3} };
    int rows = sizeof(array)/sizeof(array[0]);
    int columns = sizeof(array[0])/sizeof(array[0][0]);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++){
            std::cout << array[i][j] << " ";
        }
        std::cout << '\n';
    }
    return 0;
}
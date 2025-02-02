#include <iostream>
int bubble_sort(int numbers[],const int SIZE);
int main(){
    int numbers[] = {9, 1, 8, 3, 7, 4, 6, 5, 2, 10};
    int SIZE = sizeof(numbers)/sizeof(numbers[0]);
    bubble_sort(numbers, SIZE);
    return 0;
}
int bubble_sort(int numbers[],const int SIZE){
    for (int i = 0; i < SIZE - 1; i++){
        int swaps = 0;
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]){
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                swaps++;
            }
        }
        if (!swaps){
            break;
        }
    }
    for (int i = 0; i < SIZE; i++){
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";
    return 0;
};
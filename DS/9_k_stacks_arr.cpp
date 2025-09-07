// Implement k stacks in a single array
#include <iostream>
using namespace std;

class K_stacks{
    int* arr;
    int size, k;
    int* top;
    int* next;
    int free_index = 0;

public:
    K_stacks(int size, int k) : size(size), k(k){
        arr = new int[size];
        top = new int[k];
        next = new int[size];
        
        for (int i = 0; i < k; i++){
            top[i] = -1;
        }
        for (int i = 0; i < size - 1; i++){
            next[i] = i + 1;
        }
        next[size - 1] = -1;
    }
    
    ~K_stacks() {
       delete[] arr;
       delete[] top;
       delete[] next;
    }

    bool push(int x, int m){
        if (free_index == -1){
            return false;
        }
        int i = free_index;
        free_index = next[i];
        next[i] = top[m];
        top[m] = i;
        arr[i] = x;
        return true;
    }
    
    int pop(int m){
        if (top[m] == -1){
            return -1;
        }
        int i = top[m];
        top[m] = next[i];
        next[i] = free_index;
        free_index = i;
        return arr[i];
    }
    

};

int main(){
    int num_of_stacks;
    int total_size;
    
    cout << "=== Implementation of K-Stacks in a Single Array ===\n";
    cout << "Enter number of stacks: ";
    cin >> num_of_stacks;
    cout << "Enter total array size: ";
    cin >> total_size;
    
    K_stacks ks(total_size, num_of_stacks);
    
    int choice;
    
    while(true) {
        cout << "\n=== Menu ===\n";
        cout << "1. Push element to stack\n";
        cout << "2. Pop element from stack\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: {
                int element, stack_num;
                cout << "Enter element to push: ";
                cin >> element;
                cout << "Enter stack number (0 to " << num_of_stacks-1 << "): ";
                cin >> stack_num;
                
                if (stack_num < 0 || stack_num >= num_of_stacks) {
                    cout << "Invalid stack number!\n";
                    break;
                }
                
                if (ks.push(element, stack_num)) {
                    cout << "Successfully pushed " << element << " to stack " << stack_num << "\n";
                } else {
                    cout << "Push failed! Array is full.\n";
                }
                break;
            }
            
            case 2: {
                int stack_num;
                cout << "Enter stack number to pop from (0 to " << num_of_stacks-1 << "): ";
                cin >> stack_num;
                
                if (stack_num < 0 || stack_num >= num_of_stacks) {
                    cout << "Invalid stack number!\n";
                    break;
                }
                
                int popped = ks.pop(stack_num);
                if (popped != -1) {
                    cout << "Popped " << popped << " from stack " << stack_num << "\n";
                } else {
                    cout << "Pop failed! Stack " << stack_num << " is empty.\n";
                }
                break;
            }
            
            case 3: {
                cout << "Exiting program. Goodbye!\n";
                return 0;
            }
            
            default: {
                cout << "Invalid choice! Please try again.\n";
                break;
            }
        }
    }
    
    return 0;
}
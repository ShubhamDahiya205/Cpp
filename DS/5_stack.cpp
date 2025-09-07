#include <iostream>
using namespace std;
class K_stacks{
    int arr[3];
    int point = -1;
public:
    void pop(){
        if (point == -1){
            cout << "Stack Underflow\n";
        } else {
            cout << "Popped : " << arr[point] << '\n';
            point--;
            arr[point] = 0;
        }
    }
    void push(int ele){
        if (point + 1 == 3){
            cout << "Stack Overflow\n";
        } else {
            point++;
            cout << "Pushed " << ele << " at " << point << " index\n";
            arr[point] = ele;
        }
    }
};
int main(){
    K_stacks st;
    int choice, ele;
    cout << "\nStack Operations :\n";
    cout << "Pop (Enter 1)\n";
    cout << "Push (Enter 2)\n";
    cout << "Exit (Enter 0)\n";
    do {
        cout << "\nEnter your choice : ";
        cin >> choice;
        if (choice == 1){
            st.pop();
        } else if (choice == 2){
            cout << "Enter the element : ";
            cin >> ele;
            st.push(ele);
        }
    } while (choice);
    cout << "\nBy : Shubham Dahiya (00414802724)";
    return 0;
}
// WAP to reverse a string using stack
#include <iostream>
using namespace std;
class K_stacks{
    char arr[15];
    int point = -1;
public:
    char pop(){
        if (point == -1){
            return '\0';
        } else {
            char ch = arr[point];
            point--;
            return ch;
        }
    }
    int push(char ele){
        if (point + 1 == 15){
            return -1;
        } else {
            point++;
            arr[point] = ele;
            return 0;
        }
    }
};
int main(){
    int l;
    K_stacks st;
    cout << "\nReversing string using Stack\n\n";
    char str[15], rev[15];
    cout << "Enter String : ";
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++){
        st.push(str[i]);
    }
    char ch;
    int i = 0;
    do{
        ch = st.pop();
        if (ch == '\0'){
            break;
        }
        rev[i] = ch;
        i++;
    } while (1);
    rev[i] = '\0';
    cout << "Reverse : " << rev;
    cout << "\n\nBy Shubham Dahiya (00414802724)\n";
    return 0;
}
// WAP to delete consecutive same letters in a sequence
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
    K_stacks st, st2;
    cout << "Removing Consecutive Alphabets\n";
    char str[15], new_str[15];
    cout << "Enter the string : ";
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++){
        st.push(str[i]);
    }
    char ch_1 = st.pop();
    char ch_2 = st.pop();
    bool multiple = false;
    while ((ch_1 != '\0') || (ch_2 != '\0')){
        if (ch_1 != ch_2){
            if ((!multiple)){
                st2.push(ch_1);
            } else {
                multiple = false;
            }
        } else {
            multiple = true;
        }
        ch_1 = ch_2;
        ch_2 = st.pop();
    }
    cout << "Modified String with consecutive characters removed : ";
    ch_1 = st2.pop();
    int i = 0;
    while (ch_1 != '\0'){
        new_str[i] = ch_1;
        ch_1 = st2.pop();
        i++;
    }
    new_str[i] = '\0';
    cout << new_str;
    cout << "\n\nBy Shubham Dahiya (00414802724)";
    return 0;
}
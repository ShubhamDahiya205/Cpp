// WAP to convert infix expression to postfix expression using stack
#include <iostream>
using namespace std;
class K_stacks{
    char arr[20];
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
        if (point + 1 == 20){
            return -1;
        } else {
            point++;
            arr[point] = ele;
            return 0;
        }
    }
};
void print_arr(char arr[20]){
    for (int i = 0; arr[i]; i++){
        cout << arr[i];
    }
}
int check_op(char ch, char operators[6]){
    for (int i = 0; i < 6; i++){
        if (operators[i] == ch){
            return (i+1);
        }
    }
    return 0;
}
void print_st(K_stacks st){
    char ch = st.pop();
    char str[20]; int i = 0;
    while (ch != '\0'){
        str[i] = ch; i++;
        ch = st.pop();
    }
    str[i] = '\0';
    for (int j = i-1; j >= 0; j--){
        cout << str[j];
    }
    return;
}
int main(){
    K_stacks st;
    char operators[6] = {'(', '+', '-', '*', '/', '^' };
    char post_arr[20]; int post_arr_index =0;
    char str[20];
    cout << "Converting Infix Expression to Postfix Expression\n";
    cout << "Enter the Expression : ";
    cin >> str;
    cout << "Symbol----------------Stack------------Postfix\n";
    for (int i = 0; str[i] != '\0'; i++){
        if (check_op(str[i], operators)){
            char ch1 = st.pop();
            if (str[i] != '('){ 
                while ((check_op(ch1, operators) >= check_op(str[i], operators))
                 || (ch1 == '+') && (str[i] == '-')
                 || (ch1 == '*') && (str[i] == '/')){
                    post_arr[post_arr_index] = ch1;
                    post_arr_index++;
                    ch1 = st.pop();
                }
                st.push(ch1);
            }
            st.push(str[i]);
            // if old >= new priority :
            //       pop out previous, till old < new
            // push new
        } else if(str[i] == ')'){// pop till '('
            char ch2 = st.pop();
            while (ch2!= '('){
                post_arr[post_arr_index] = ch2;
                post_arr_index++;
                ch2 = st.pop();
            }
        } else {    // push character to post
            post_arr[post_arr_index] = str[i];
            post_arr_index++;
        }
        post_arr[post_arr_index] = '\0';
        cout << str[i];
        cout << "                 ";
        print_st(st);
        cout << "                 ";
        print_arr(post_arr);
        cout << '\n';
    }
    cout << "\n\nBy : Shubham Dahiya (00414802724)";
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
class String{
    string str;
public:
    String(string st) : str(st){}
    void print(string s1){
        cout << s1 << str << '\n';
    }
    String operator+(String str2){
        String str_res(str + str2.str);
        return str_res;
    }
    void operator=(String str2){
        str = str2.str;
    }
    bool operator<=(String str2){
        return (str <= str2.str);
    }
    int len(){
        return str.length();
    }
    void tolower(){
        for (int i = 0; i < str.length(); i++){
            if ((str[i] >= 'A') && (str[i] <= 'Z')){
                str[i] = str[i] + 32;
            }
        }
    }
    void toupper(){
        for (int i = 0; i < str.length(); i++){
            if ((str[i] >= 'a') && (str[i] <= 'z')){
                str[i] = str[i] - 32;
            }
        }
    }
};
int main() {
    String str1("Hello");
    String str2("WheRE");
    str1.print("String1 : ");
    str2.print("String2 : ");
    String str_res = str1 + str2; 
    str_res.print("String1 + String2 : ");
    if (str1<=str2){
        cout << "String1 is less than or equal to String 2\n";
    } else{
        cout << "String1 is greater than or equal to String 2\n";
    }
    str1 = str2;
    cout << "String1 = String2 : ";
    str1.print("");
    cout << "Length of String1 : " << str1.len() << '\n';
    str1.tolower();
    str1.print("String1.tolower() : ");
    str1.toupper();
    str1.print("String1.toupper() : ");
    cout << "\nShubham Dahiya (004 1480 2724)";
    return 0;
}
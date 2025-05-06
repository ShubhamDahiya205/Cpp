#include <bits\stdc++.h>
using namespace std;

bool palindrome1(string);
bool palindrome2(string);
bool palindrome3(string, int);

int main(){
    string str;
    cout << "Enter the String : ";
    getline(cin, str);
    if (palindrome1(str)) cout << "Palindrome" << "\n";
    else cout << "Not A Palindrome\n";
    if (palindrome2(str)) cout << "Palindrome" << "\n";
    else cout << "Not A Palindrome\n";
    if (palindrome3(str, 0)) cout << "Palindrome" << "\n";
    else cout << "Not A Palindrome\n";
    return 0;
}

bool palindrome1(string str){
    string str1 = "";
    int l = str.size();
    for (int i = 0; i < l; i++){
        str1 += str[l - i - 1]; // just add at the end
    }
    return str == str1;
}

bool palindrome2(string str){
    int l = str.size();
    int i = 0, j = l - 1 - i;
    while (i < l/2){
        if (str[i] != str[j]) break;
        i++;
    }
    return i == l/2;
}

bool palindrome3(string str, int i){
    if (i == str.size()/2) return true;
    if (str[i] == str[str.size() - 1 - i]) return palindrome3(str, i + 1);
    else return false;
}
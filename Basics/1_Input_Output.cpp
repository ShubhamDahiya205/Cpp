#include <bits/stdc++.h>
using namespace std;
int main(){
    std::string name;
    int age;
    std::cout << "What's you age ";
    std::cin >> age;
    std::cout << "What's your name ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Your name is " << name << " and \n";
    std::cout << "You're " << age << " years old.\n";
    (name == "Natsuki Subaru") ? std::cout << "You can RBD.\n" : std::cout << "Subaru is a nice guy\n";
    switch (age)
    {
    case 7 :
        std::cout << "Reinhard was banned from international travel at this age." << "\n";
        break;
    case 13:
        std::cout << "Ayonoji is not real.\n";
    default:
        std::cout << "You're good.\n"; 
        break;
    }
    return 0;
}
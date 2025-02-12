#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    int a = (rand() % 6) + 1;
    switch (a)
    {
    case 1:
        std::cout << "Natsuki Subaru" << '\n';
        break;
    
    case 2:
        std::cout << "Reinhard Van Astrea" << '\n';
        break;
    
    case 3:
        std::cout << "Petelguese Romane' Conti" << '\n';
        break;
    
    case 4:
        std::cout << "Wilhelm Van Astrea" << '\n';
        break;
    
    case 5:
        std::cout << "Regulus Corneas" << '\n';
        break;
    }
    return 0;
}
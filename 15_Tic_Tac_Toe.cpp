#include <iostream>
#include <limits>

char user_input();
void print_board(char *board);          // pointer to an array board

int main(){
    std::cout << "************************************\n";
    std::cout << " Welcome to the Game of Tic Tac Toe\n";
    std::cout << "************************************\n";
    return 0;
}

char user_input(){
    char user_choice;
    do
    {
    std::cin >> user_choice;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n');
        continue;
    }
    if (user_choice == 'O' || user_choice == 'X'){
        break;
    }   else {
        std::cout << "Enter X or O : ";
    }
    } while (true);
    return user_choice;
}
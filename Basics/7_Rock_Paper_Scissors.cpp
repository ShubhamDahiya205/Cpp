#include <iostream>
#include <limits>
#include <ctime>

char take_choice();
void show_choice(char choice);
char computer_choice();
void show_winner(char user_choice, char comp_choice);


int main() {
    char user_choice, comp_choice;
    do {
        std::cout << "Rock-Paper-Scissors Game!\n";
        std::cout << "*************************\n";
        std::cout << "Choose one of the following\n";
        std::cout << "r for Rock\n";
        std::cout << "p for Paper\n";
        std::cout << "s for Scissors\n";
        std::cout << "q to Quit\n";
        user_choice = take_choice();
        if (user_choice == 'q'){
            std::cout << "Thanks for Playing!\n";
            break;
        }
        show_choice(user_choice);
        comp_choice = computer_choice();    
        show_choice(comp_choice);
        show_winner(user_choice, comp_choice);
    } while (true);

    return 0;
}
char take_choice() {
    char user_choice;
    do {
        std::cin >> user_choice;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if (user_choice == 'r' || user_choice == 'p' || user_choice == 's' || user_choice == 'q') {
            return user_choice;
        }
        std::cout << "Enter valid input.\n";
    }   while (true);
};
void show_choice(char choice) {
    switch (choice)
    {
    case 'r':
        std::cout << "You chose : Rock\n";
        break;
    case 'p':
        std::cout << "You chose : Paper\n";
        break;
    case 's':
        std::cout << "You chose : Scissors\n";
        break;
    }
}
char computer_choice(){
    srand(time(0));                         // or srand(time(NULL))
    switch (rand() % 3)
    {
    case 0: return 'r';
    case 1: return 'p';
    case 2: return 's';
    default: return 0;
    }
}
void show_winner(char user_choice, char comp_choice) {
    if (user_choice == comp_choice) {
        std::cout << "It's a Draw\n";
    } else if ((user_choice == 'r' && comp_choice == 'p') || (user_choice == 'p' && comp_choice == 's') || (user_choice == 's' && comp_choice == 'r')) {
        std::cout << "You Lost!\n";
        std::cout << "Try again\n";
    } else {
        std::cout << "You Won!\n";
    }
}

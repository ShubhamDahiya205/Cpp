#include <iostream>
#include <ctime>
#include <limits>
#include <string>
int main() {
    std::cout << "Welcome to Rock, Paper, Scissors Game" << '\n';
    int rps_c;
    srand(time(0));

    while (true) {
       std::cout << "Enter 1 for Rock" << '\n';
       std::cout << "Enter 2 for Paper" << '\n';
       std::cout << "Enter 3 for Scissors" << '\n';
       std::cout << "Enter 0 to Quit" << '\n';
       std::cout << "Enter : ";

       while (true) {
          std::cin >> rps_c;
          if (std::cin.fail() || rps_c < 0 || rps_c > 3) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter : ";
            continue;
          }
          switch (rps_c){
            case 1:
              std::cout << "You chose Rock.\n";
              break;
            case 2:
              std::cout << "You chose Paper.\n";
              break;
            case 3:
              std::cout << "You chose Scissors.\n";
              break;
          }
          break;
       }   
      if (rps_c == 0) {
        std::cout << "Thanks for playing.\n";
        break;
       }
      int comp_choice = (rand() % 3) + 1;
      switch (comp_choice) {
        case 1:
          std::cout << "Computer Chose Rock.\n"; 
          break;
          
        case 2:
          std::cout << "Computer Chose Paper.\n"; 
          break;
          
        case 3:
          std::cout << "Computer Chose Scissors.\n"; 
          break;
      }
      if (rps_c == comp_choice){
          std::cout << "It's a draw.\n";
        } else if ((rps_c == 1 && comp_choice == 2) || (rps_c == 2 && comp_choice == 3) || (rps_c == 3 && comp_choice == 1)) {
          std::cout << "You lost.\n";
         } else {
          std::cout << "You WON!\n";
      } 
    } 
    return 0;
}
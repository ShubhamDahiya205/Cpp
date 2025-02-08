// to check if a credit card number is valid or not
// Right to Left > double every 2nd digit
//                 if the doubled number is 2 digits, split them
//                 Add all these single digits
// Right to left > take every digit placed at odd nubmered place
//                 add all of them
// Sum of both results divisible by 10 > valid

#include <iostream>
#include <limits>

int get_number(const int number);
int sum_odd(const std::string card_number);
int sum_even(const std::string card_number);
int check_credit_card(const std::string card_number);

int main(){
    std::string card_number;
    
    std::cout << "Enter a credit card number: " ;
    std::cin >> card_number;

    check_credit_card(card_number);

    return 0;
}

int get_number(const int number){
    return int(number / 10) + (number % 10);
}
int sum_odd(const std::string card_number){
    int sum = 0;
    for (int i = card_number.size() - 1; i > 0; i -= 2){
        sum += card_number[i] - '0';          // ASCII : 0 is 48, so '1' - '0' : 49 - 48 = 1 
    }
    return sum;
}
int sum_even(const std::string card_number){
    int sum = 0;
    for (int i = card_number.size() - 2; i >= 0; i -= 2){
        sum += get_number((card_number[i] - '0') * 2);          // ASCII : 0 is 48, so '1' - '0' : 49 - 48 = 1 
    }
    return sum;
}
int check_credit_card(const std::string card_number){

    int even = sum_even(card_number);
    int odd = sum_odd(card_number);
    if ((even + odd) % 10 == 0){
        std::cout << "Credit card number is VALID\n";
    } else {
        std::cout << "Credit card number is INVALID\n";
    }
    return 0;
}
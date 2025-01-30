#include <iostream>
#include <limits>                                   // for std::cin.ignore(std::numeric_limits<std::streamsize>::max(), "/n"); 
#include <iomanip>                                  // for std::setprecision(decimal places) << std::fixed << var;

int show_balance(double balance);
double deposit_money(double balance);
double withdraw_money(double balance);

int main(){
    using std::cout;
    using std::cin;
    int user_choice;
    double money_transfer;
    double balance = 5000;
    do
    {
        cout << "*****************\nEnter your choice\n*****************\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cin >> user_choice;
        if (std::cin.fail())
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        switch (user_choice){
            case 1 :
                show_balance(balance);
                break;
            case 2 :
                balance = deposit_money(balance);
                break;
            case 3 :
                balance = withdraw_money(balance);
                break;
            case 4 :
                cout << "Thanks for visiting\n";
                break;
            default :
                cout << "Enter valid input\n";
                break;
        }
    }   while (user_choice != 4);
    return 0;
}

int show_balance(double balance) {
    using std::cout;
    cout << "Your current balance is $" << std::setprecision(2) << std::fixed << balance << "\n\n";
    return 0;
}
double deposit_money(double balance) {
    using std::cout, std::cin;
    double money;
    do 
    {
        cout << "Enter amount to be deposited : ";
        cin >> money;
        if (0 < money)
        {
            break;
        }   else {
            cout << "Enter valid amount\n";
        }
    } while (true);
    balance = balance + money;
    cout << "You deposited $" << money << "\n";
    show_balance(balance);
    return balance;
}
double withdraw_money(double balance) {
    using std::cout, std::cin;
    double money;
    do 
    {
        cout << "Enter amount to be withdrawn : ";
        cin >> money;
        if (0 < money && money <= balance)
        {
            break;
        }   else {
            cout << "Enter valid amount\n";
        }
    } while (true);
    balance = balance - money;
    cout << "You withdrew $" << money << "\n";
    show_balance(balance);
    return balance;
}
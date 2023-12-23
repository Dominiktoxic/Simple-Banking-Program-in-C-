#include <iostream>
#include <cstdlib>
#include <iomanip>

void showBalance(double balance) {
    std::cout << "Your balance is £" << std::setprecision(2) << std::fixed << balance << "\n";
};

int main() {
    int option = 0;
    double balance = 0.00;
    double deposit;
    double withdraw;

    while (option != 4) {
        std::cout << "**************** BANKING PROGRAM **************** \n";
        std::cout << "Choose One Option: \n";
        std::cout << "************************************************* \n";

        std::cout << "(1) Show Balance \n";
        std::cout << "(2) Deposit \n";
        std::cout << "(3) Withdraw \n";
        std::cout << "(4) Quit \n";

        std::cout << "Option: ";
        std::cin >> option;

        switch(option) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                std::cout << "How much would you like to deposit: ";
                std::cin >> deposit;
                if (deposit < 0) {
                    std::cout << "Invalid Transaction. \n";
                } else {
                    balance += deposit;
                    showBalance(balance);
                }
                break;
            case 3:
                std::cout << "How much would you like to withdraw: ";
                std::cin >> withdraw;
                if (withdraw > balance) {
                    std::cout << "Invalid Transaction.";
                } else {
                    balance -= withdraw;
                }
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thank you for using the program! \n";
                std::exit(0);
                break;
            default:
                std::cout << "Invalid Operation! You must choose an option between 1 and 4! \n";
                break;
        }
    }

    return 0;
}
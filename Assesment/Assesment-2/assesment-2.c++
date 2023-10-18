#include <iostream>
#include <ctime>

class ATM {
private:
    int pin;
    double initialBalance;
    double currentBalance;

public:
    ATM() {
        pin = 12345;
        initialBalance = 60000.0;
        currentBalance = 20000.0;
    }

    void displayWelcomeScreen() {
        time_t currentTime = time(0);
        tm* now = localtime(&currentTime);

        std::cout << "Welcome to the ATM" << std::endl;
        std::cout << "Current Date and Time: " << now->tm_year + 1900 << "-"
                  << now->tm_mon + 1 << "-" << now->tm_mday << " "
                  << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << std::endl;
        std::cout << "1. Enter ATM PIN" << std::endl;
        std::cout << "2. Help" << std::endl;
    }

    void displayHelpScreen() {
        std::cout << "Help Screen" << std::endl;
        // Add help instructions here
    }

    void enterPIN() {
        int enteredPin;
        std::cout << "Enter ATM PIN: ";
        std::cin >> enteredPin;

        if (enteredPin == pin) {
            displayMenuScreen();
        } else {
            std::cout << "Incorrect PIN. Exiting..." << std::endl;
        }
    }

    void displayMenuScreen() {
        int choice;
        while (true) {
            std::cout << "Menu:" << std::endl;
            std::cout << "1. Deposit" << std::endl;
            std::cout << "2. Check Balance" << std::endl;
            std::cout << "3. Exit" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    deposit();
                    break;
                case 2:
                    checkBalance();
                    break;
                case 3:
                    return;
                default:
                    std::cout << "Invalid choice. Try again." << std::endl;
            }
        }
    }

    void deposit() {
        double amount;
        std::cout << "Enter the amount to deposit: Rs. ";
        std::cin >> amount;
        if (amount > 0) {
            currentBalance += amount;
            std::cout << "Deposit successful. New balance: Rs. " << currentBalance << std::endl;
        } else {
            std::cout << "Invalid amount. Please enter a positive amount." << std::endl;
        }
    }

    void checkBalance() {
        std::cout << "Current balance: Rs. " << currentBalance << std::endl;
    }
};

int main() {
    ATM atm;
    atm.displayWelcomeScreen();
    int choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            atm.enterPIN();
            break;
        case 2:
            atm.displayHelpScreen();
            break;
        default:
            std::cout << "Invalid choice. Exiting..." << std::endl;
            break;
    }

    return 0;
}

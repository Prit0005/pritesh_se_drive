#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RockPaperScissors {
public:
    void displayMenu();
    void playGame();

private:
    int getComputerChoice();
    int getUserChoice();
    void determineWinner(int userChoice, int computerChoice);
};

void RockPaperScissors::displayMenu() {
    cout << "   Rock Paper Scissors Game   \n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "4. Quit\n";
   
}

int RockPaperScissors::getComputerChoice() {
    srand(time(0)); 
    return (rand() % 3) + 1; 
}

int RockPaperScissors::getUserChoice() {
    int choice;
    cout << "Enter your choice : ";
    cin >> choice;
    while (choice < 1 || choice > 4) {
        cout << "Invalid choice. Please enter a number between 1 and 4: ";
        cin >> choice;
    }
    return choice;
}

void RockPaperScissors::determineWinner(int userChoice, int computerChoice) {
    cout << "You chose: " << userChoice << ", Computer chose: " << computerChoice << endl;
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << "You lose!\n";
    }
}

void RockPaperScissors::playGame() {
    int userChoice;
    do {
        displayMenu();
        userChoice = getUserChoice();
        if (userChoice == 4) {
            cout << "Thank you for playing!\n";
            break;
        }
        int computerChoice = getComputerChoice();
        determineWinner(userChoice, computerChoice);
    } while (userChoice != 4);
}

int main() {
    RockPaperScissors game;
    game.playGame();
    return 0;
}

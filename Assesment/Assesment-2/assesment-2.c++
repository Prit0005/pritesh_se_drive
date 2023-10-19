#include <iostream>
#include <ctime>
using namespace std;
class ATM
{
private:
    int pin;
    double initialBalance;

public:
    ATM()
    {
        pin = 12345;
        initialBalance = 60000.0;
    }
    void welcome()
    {
        int choice;
        cout << "---------------------------welcome to ATM--------------------------" << endl;
        time_t currenttime = time(0);
        cout << "current time is :" << ctime(&currenttime) << endl;
        cout << "press 1 and then press enter to access your account via pin number" << endl
             << "or" << endl
             << "Press 0 and press enter to get:" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "ATM account access" << endl;
            cout << "enter your pin to access :[only one pin to access] " << endl;
        }
        else if (choice == 0)
        {
            cout << "ATM account status" << endl;
            cout << "you must have the currect pin number to access this account . see your bank representative for assistance during bank opening hours thanks for ,your choice today ";
        }
    }
    void pinnumber()
    {
        int pin=12345;
        int p;
        cin >> p;
        if (p != pin)
        {
            cout << "THANK YOU";
            cout << "you head made your attempts which failed!! no more attempts allowed!! SORRY";
        }
        else
        {
            menu();
            
        }
    }
    void menu()
    {
        int select;
        cout << "ATM main menu screen" << endl;
        cout << "Enter 1 to deposit cash:\nEnter 2 to withdraw cash:\nEnter 3 to balance inquiry:\nenter 0 to exit atm:" << endl
             << endl;
        cout << "PLEASE ENTER A SELECTION AND PRESS RETURN KEY" << endl;
        cin >> select;
        switch (select)
        {
        case 1:
        {
            deposite();
            break;
        }
        case 2:
        {
            withdraw();
            break;
        }
        case 3:
        {
            inquiry();
        }
        case 0:
        {
            cout << "exit";
        }
        }
    }
    void deposite()
    {
        double depositAmount;
        cout << "name of account holder:pritesh patel\n";
        cout << "account holder address is :ahmedabad\n";
        cout << "branch location is :ahmedabad\n";
        cout << "account number :987654\n";
        cout << "available blance :"<<initialBalance<<endl;
        cout << "Enter the amount to deposit: Rs. ";
        cin >> depositAmount;
        initialBalance += depositAmount;
        cout << "Deposit successful. Updated balance: Rs. " << initialBalance << "\n";
         cout << "Your account balance: Rs. " << initialBalance << "\n";
    }
    void withdraw()
    {
        double withdrawalAmount;
        cout << "name of account holder:pritesh patel\n";
        cout << "account holder address is :ahmedabad\n";
        cout << "branch location is :ahmedabad\n";
        cout << "account number :987654\n";
        cout << "Enter the amount to withdraw: Rs. ";
        cin >> withdrawalAmount;
        if (withdrawalAmount > initialBalance)
        {
            cout << "Insufficient funds. Withdrawal unsuccessful.\n";
        }
        else
        {
            initialBalance -= withdrawalAmount;
            cout << "Withdrawal successful. Updated balance: Rs. " << initialBalance << "\n";
        }
    }
    void inquiry()
    {
        cout << "Your account balance: Rs. " << initialBalance << "\n";
    }
};
int main()
{
    ATM a;
    a.welcome();
    a.pinnumber();
    return 0;
}
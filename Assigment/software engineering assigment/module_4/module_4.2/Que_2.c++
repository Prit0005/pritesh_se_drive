/* Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance */

#include <iostream>
using namespace std;
class bank
{
    string depositorname, accountype;
    int acnumber, balance;

public:
    void assign(string name, int number, int bal, string type)
    {
        depositorname = name;
        acnumber = number;
        accountype = type;
        balance = bal;
    }
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "amount is " << amount << " succesfully credited" << endl;
        }
        else
        {
            cout << "really very sorry amount is not debited";
        }
    }
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "amount is " << amount << " succesfully withdraw" << endl;
        }
        else
        {
            cout << "insufficient balance";
        }
    }
    void displayInfo()
    {
        cout << "Account Information:" << endl;
        cout << "Depositor Name: " << depositorname << endl;
        cout << "Account Number: " << acnumber << endl;
        cout << "Account Type: " << accountype << endl;
        cout << "Balance: $" << balance << endl;
    }
};
int main()
{
    bank b;
    b.assign("pritesh", 1234, 999, "saving");
    b.displayInfo();
    b.deposit(999);
    b.withdraw(7);
    b.displayInfo();
    return 0;
}

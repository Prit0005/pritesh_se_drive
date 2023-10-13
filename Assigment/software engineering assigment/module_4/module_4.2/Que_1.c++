// WAP to create simple calculator using class
#include <iostream>
using namespace std;
class calculator
{
public:
    int num1, num2, result, choise;
    void number()
    {
        cout << "Enter num1 & num2 here:";
        cin >> num1 >> num2;
    }
    void calculate()
    {
        cout << "Enter your choice:1.addition\n2.substration\n3.multiplication\n4.division\n";
        cin >> choise;
        switch (choise)
        {
        case 1:
        {
            result = num1 + num2;
            cout << "addition of two number is :" << result;
            break;
        }
        case 2:
        {
            result = num1 - num2;
            cout << "subtraction of two number is :" << result;
            break;
        }
        case 3:
        {
            result = num1 * num2;
            cout << "multiplication of two number is :" << result;
            break;
        }
        case 4:
        {
            result = num1 / num2;
            cout << "division of two number is :" << result;
            break;
        }
        default:
        {
            cout << "Enter valid number under 1 to 4 !!!!";
        }
        }
    }
};
int main()
{
    calculator c;
    c.number();
    c.calculate();
}
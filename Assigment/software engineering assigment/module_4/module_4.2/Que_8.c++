/* Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */
#include <iostream>
using namespace std;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    float add(float a, float b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    float subtract(float a, float b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    float multiply(float a, float b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {
        return a / b;
    }

    float divide(float a, float b)
    {
        return a / b;
    }
};

int main()
{
    Calculator calculator;

    cout << "Addition: " << calculator.add(5, 3) << endl;
    cout << "Subtraction: " << calculator.subtract(5, 3) << endl;
    cout << "Multiplication: " << calculator.multiply(5, 3) << endl;
    cout << "Division: " << calculator.divide(5, 3) << endl;
    cout << "---------------------------------------------------------------------------";
    cout << "Addition: " << calculator.add(5.5f, 3.2f) << endl;
    cout << "Subtraction: " << calculator.subtract(5.5f, 3.2f) << endl;
    cout << "Multiplication: " << calculator.multiply(5.5f, 3.2f) << endl;
    cout << "Division: " << calculator.divide(5.5f, 3.2f) << endl;

    return 0;
}

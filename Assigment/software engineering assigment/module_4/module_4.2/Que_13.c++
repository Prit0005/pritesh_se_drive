/* Write a program to find the max number from given two numbers using
friend function */
#include <iostream>
using namespace std;

class MaxNumberFinder
{
private:
    int num1, num2;

public:
    MaxNumberFinder(int a, int b) : num1(a), num2(b) {}
    friend void findMaxNumber(MaxNumberFinder obj);
};
void findMaxNumber(MaxNumberFinder obj)
{
    if (obj.num1 > obj.num2)
    {
        cout << "Maximum number is: " << obj.num1 << endl;
    }
    else
    {
        cout << "Maximum number is: " << obj.num2 << endl;
    }
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    MaxNumberFinder obj(num1, num2);
    findMaxNumber(obj);

    return 0;
}

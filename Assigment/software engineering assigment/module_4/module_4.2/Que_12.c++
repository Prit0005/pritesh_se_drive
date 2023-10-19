/* Write a program to swap the two numbers using friend function without
using third variable   */
#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int num1, num2;

public:
    SwapNumbers(int a, int b) : num1(a), num2(b) {}
    friend void swapNumbers(SwapNumbers &obj);
    void displayNumbers() {
        cout << "Numbers after swapping: " << num1 << " " << num2 << endl;
    }
};
void swapNumbers(SwapNumbers &obj) {
    obj.num1 = obj.num1 + obj.num2;
    obj.num2 = obj.num1 - obj.num2;
    obj.num1 = obj.num1 - obj.num2;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    SwapNumbers obj(num1, num2);
    swapNumbers(obj);
    obj.displayNumbers();

    return 0;
}

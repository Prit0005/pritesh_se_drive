// Write a program of to swap the two values using templates   
#include <iostream>
using namespace std;
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    cout << "Original values: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapValues(num1, num2);
    cout << "After swapping integers: num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}
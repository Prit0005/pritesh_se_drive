/*  Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.  */
#include <iostream> 
using namespace std; 
class calculator 
{ 
public: 
    calculator(double value_a, double value_b) 
    { 
        int choice; 
        cout << "Choice Any Option\n1.addition\n2.subtraction\n3.multiplication\n4.division" << endl;  
        cin >> choice; 
 
        switch (choice) 
        { 
            int result; 
        case 1: 
            result = value_a + value_b; 
            cout<<"Result is "<<result; 
            break; 
        case 2: 
            result = value_a - value_b; 
             cout<<"Result is "<<result; 
            break; 
        case 3: 
            result = value_a * value_b; 
             cout<< "Result is "<<result; 
            break; 
        case 4: 
            result = value_a / value_b; 
             cout<<"Result is "<<result; 
            break; 
 
        default: 
            cout << "Invalid Input plz Choice Input is a  (1 to 4)"; 
            break; 
        } 
    } 
}; 
int main() 
{ 
    int a, b; 
    cout << "Enter the values:"; 
    cin >> a >> b; 
    calculator obj (a,b); 
}
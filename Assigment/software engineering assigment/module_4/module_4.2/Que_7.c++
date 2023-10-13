/* Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance) */
#include <iostream>
using namespace std;
class students
{
public:
    int rollnum;
    void number()
    {
        cout << "enter student roll number:" << endl;
        cin >> rollnum;
    }
};
class test : public students
{
public:
    int num1, num2;
    void subject()
    {
        cout << "enter student subject marks subject 1 & subject 2:" << endl;
        cin >> num1>> num2;
    }
};
class result : public test
{
public:
    int marks;
    void mark()
    {
        marks = num1 + num2;
        cout << "student marks :" << marks << endl;
    }
};
int main()
{
    result r;
    r.number();
    r.subject();
    r.mark();
    return 0;
}
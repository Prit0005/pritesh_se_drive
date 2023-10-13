/* Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)  */
#include <iostream>
using namespace std;
class cricketer
{
protected:
    string name;
    int age;

public:
    void datainput()
    {
        cout << "enter batsman name :";
        cin >> name;
        cout << "enter batsman age :";
        cin >> age;
    }
};
class batsman : public cricketer
{
    int run, performance;
    double average;

public:
    void data()
    {
        datainput();
        cout << "enter toral run :";
        cin >> run;
        cout << "enter performance :";
        cin >> performance;
    }
    void average1(){
         int matchesPlayed;
        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;
        average = run / matchesPlayed;
    }
     void displayData() {
        cout<< "Cricketer's Name: " << name << endl;
        cout<< "Cricketer's Age: " << age << endl;
        cout<< "Total Runs: " << run << endl;
        cout<< "Average Runs: " << average << endl;
        cout<< "Best Performance: " << performance <<endl;
    }
};
int main(){

    batsman b;
    b.data();
    b.average1();
    b.displayData();
}
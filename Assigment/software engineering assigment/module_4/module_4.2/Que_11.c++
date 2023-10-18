/*  Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
 Circle: Pi * Area *Area  */
#include <iostream>
using namespace std;
const double pi = 3.14;
class shape
{
public:
    double circlearea(double r)
    {
        return pi * r * r;
    }
    double circlearea(double r, double bredth)
    {
        return r * bredth;
    }
    double circlearea(int r, int bredth)
    {
        return 0.5 * r * bredth;
    }
};
int main()
{
    shape s;
    int circle, triangle, rect;
    circle = s.circlearea(5);
    cout << "circle area is " << circle << endl;
    triangle = s.circlearea(5, 6);
    cout << "triangle area is " << triangle << endl;
    rect = s.circlearea(5, 8);
    cout << "rectanle area is " << rect;
}
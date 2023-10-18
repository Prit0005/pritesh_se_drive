// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;

class Matrix
{
    int a[1];

public:
    void accept();
    void display();
    void operator+(Matrix x);
};
void Matrix::accept()
{
    int i, j;
    cout << "\n Enter Matrix Element (1 X 1) : \n";

    for (int i = 0; i < 1; i++)
    {
        cin >> a[i];
    }
}
void Matrix::display()
{
    for (int i = 0; i < 1; i++)
    {
        cout << a[i]<<endl;
    }
}
void Matrix::operator+(Matrix x)
{
    int mat[1];
    for (int i = 0; i < 1; i++)
    {
        mat[i] = a[i] + x.a[i];
    }
    cout << "\n Addition of Matrix : \n\n";
    for (int i = 0; i < 1; i++)
    {
        cout << mat[i]<<endl;
    }
}
int main()
{
    Matrix m, n;
    m.accept();
    n.accept();
    cout << "\n First Matrix : \n\n";
    m.display();
    cout << "\n Second Matrix : \n\n";
    n.display();
    m + n;
    return 0;
}
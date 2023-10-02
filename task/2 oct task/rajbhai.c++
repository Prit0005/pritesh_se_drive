#include <iostream>
using namespace std;
int checkevenodd(int num[])
{
    int i;
    cout << "This is your Even Number";
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            cout << num[i] << "\t";
        }
    }
    cout << endl
         << "This Is your Odd number";
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 != 0)
        {
            cout << num[i] << "\t";
        }
    }
}
int oddsum(int num[])
{
    int i, odd[10], o, oddtotal;
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 != 0)
        {
            odd[o] = num[i];
            o++;
            oddtotal += num[i];
        }
    }
    cout << "Count Of odd number" << o;
    cout << "Sum of odd Number" << oddtotal;
}

int evensum(int num[])
{
    int i, even[10], e, eventotal;
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            even[e] = num[i];
            e++;
            eventotal += num[i];
        }
    }
    cout << "Count Of even number" << e;
    cout << "Sum of Even Number" << eventotal;
}

int main()
{
    int num[10], i;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter the number:";
        cin >> num[i];
    }
    checkevenodd(num);
    evensum(num);
    oddsum(num);
}
#include <iostream>
using namespace std;

int checkevenodd(int num[])
{
    int i;

    cout << "this is the even number:";
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {

            cout << num[i] << "\t";
        }
    }
    cout << "\nthis is the odd number:";
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 != 0)
        {

            cout << num[i] << "\t";
        }
    }

    return 0;
}
int odd(int num[]){
    int i, odd[10],o=0, oddtotal = 0;
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 != 0)
        {
            odd[o] = num[i];
            o++;
            oddtotal += num[i];
        }
    }
    cout << "\ncounter of odd number:" << o;
    cout << "\nsum of odd number:" << oddtotal;
}
int even(int num[])
{

    int i, even[10], j = 0, eventotal = 0, e;

    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            even[j] = num[i];
            j++;
            eventotal += num[i];
        }
    }
    cout << "\ncounter of even number:" << j;
    cout << "\nsum of even number:" << eventotal;
    for (i = 0; i <10; i++)
    {
        if (num[i] % 2 == 0)
        {
            cout << "\nthis is your table " << num[i] << endl;
            for (e = 1; e <= 10; e++)
            {

                cout << num[i] << "*" << e << "=" << num[i] * e << endl;
            }
        }
    }
}
int main()
{
    int num[10], i;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter number here:";
        cin >> num[i];
    }
    checkevenodd(num);
    odd(num);
    even(num);
  
}

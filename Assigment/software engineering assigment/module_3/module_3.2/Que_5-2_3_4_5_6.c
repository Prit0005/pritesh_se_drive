/* WAP to take 10 no. Input from user and find out …
 How many Even numbers are there
 How many odd numbers are there
 Sum of even numbers
 Sum of odd numbers */

#include <stdio.h>
void main()
{
    int i, even = 0, odd = 0, even_total = 0, odd_total = 0;
    for (i = 0; i <= 10; i++)
    {
        printf("Enter 10 number :");
        scanf("%d", &i);
    }
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            even++;
            even_total += i;
        }
        else
        {
            odd++;
            odd_total += i;
        }
    }
    printf("Even number are:%d\n", even);
    printf("Odd number are :%d\n", odd);
    printf(" sum of even number are :%d\n", even_total);
    printf("sum of odd number are :%d\n", odd_total);
}

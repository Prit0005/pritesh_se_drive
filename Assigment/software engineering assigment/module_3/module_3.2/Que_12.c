// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
#include <stdio.h>
void main()
{
    int i, lastdegit, firstdigit, sum;
    printf("Enter the number:");
    scanf("%d", &i);
    lastdegit = i % 10;
    while (i >= 10)
    {
        i /= 10;
    }
    firstdigit = i;
    sum = lastdegit + firstdigit;
    printf("sum of last degit and first digit is :%d", sum);
}
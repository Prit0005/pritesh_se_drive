// Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>
void main()
{
    int num, temp, reminder, sum = 0;
    printf("Enter your number :");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        reminder = temp % 10;
        sum += reminder;
        temp /= 10;
    }
    printf("sum of %d is %d", num, sum);
}
/* Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)  */
#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("addition is :%d \n", a + b);
    printf("subtraction is :%d\n", a - b);
    printf("multiplication is :%d\n ", a * b);
    printf("division is :%d\n", a / b);
    printf("module is :%f\n ", a % b);
}
 //WAP to swap two numbers without using third variable


#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping:\n");
    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %d\n", num2);

    return 0;
}

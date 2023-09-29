// WAP to print table up to given numbers
#include <stdio.h>
void main()
{
    int i, num;
    printf("Enter the number");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", i, num, num * i);
    }
}
/* WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746  */
#include <stdio.h>
void main()
{
    int num, reminder = 0, reversenumber = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        reminder = num % 10;
        reversenumber = reversenumber * 10 + reminder;
        num /= 10;
    }
    printf("Reverse number is : %d\n", reversenumber);
}

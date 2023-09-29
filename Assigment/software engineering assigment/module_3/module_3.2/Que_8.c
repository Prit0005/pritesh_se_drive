// WAP to print Fibonacci series up to given numbers
#include <stdio.h>
void main()
{
    int n, i, s1 = 0, s2 = 1, s3;
    printf("Enter the values :");
    scanf("%d", &n);
    printf("%d\t%d\t", s1, s2);
    for (i = 2; i < n; ++i)
    {
        s3 = s1 + s2;
        printf("%d\t", s3);
        s1 = s2;
        s2 = s3;
    }
}
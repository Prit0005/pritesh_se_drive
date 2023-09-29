// WAP to find simple interest
#include <stdio.h>
void main()
{
    float p, t, r, si;
    printf("Enter the value of p:\n");
    printf("Enter the value of r:\n");
    printf("Enter the value of t:\n");
    scanf("%f%f%f", &p, &r, &t);
    si = p * r * t / 100;
    printf("simple interest  :%f", si);
}

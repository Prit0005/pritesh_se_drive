#include<stdio.h>
void main(){
    int num,A=0,B=0;
    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division");
    printf("\nEnter your choice :");
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("Enter first number :");
        scanf("%d",&A);
        printf("Enter second number :");
        scanf("%d",&B);
        printf("Addition is :%d",A+B);
        break;
        case 2:
        printf("Enter first number :");
        scanf("%d",&A);
        printf("Enter second number :");
        scanf("%d",&B);
        printf("Substraction is :%d",A-B);
        break;
        case 3:
        printf("Enter first number :");
        scanf("%d",&A);
        printf("Enter second number :");
        scanf("%d",&B);
        printf("MUltiplication is :%d",A*B);
        break;
        case 4:
        printf("Enter first number :");
        scanf("%d",&A);
        printf("Enter second number :");
        scanf("%d",&B);
        printf("Division is :%d",A/B);
        break;
        default:
        printf("Invalid number !!!!!");
        break;
    }
}
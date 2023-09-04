#include<stdio.h>
void main(){
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    if (number==0){
        printf("zero number");
    }
    else if (number>1){
        printf("%d is positive number",number);
    }
    else{
        printf("%d is negative number",number);
    }
}
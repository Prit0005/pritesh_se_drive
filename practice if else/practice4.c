#include<stdio.h>
void main(){
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    if (number %5==0 && number %11==0){
        printf("%d number is divide by 5 and 11",number);
    }
    else{
        printf("%d number is not divide by 5 and 11",number);
    }
}
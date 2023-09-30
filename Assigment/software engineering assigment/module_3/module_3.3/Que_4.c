//WAP to find factorial using recursion
#include<stdio.h>
int fact(int number){
    if(number==0){
        return 0;
    }
    else if(number==1){
        return 1;
    }
    else{
        return number*fact(number-1);
    }
}
void main(){
    int number,f;
    printf("Enter your number :");
    scanf("%d",&number);
    f=fact(number);
    printf("Factorial is :%d",f);
}
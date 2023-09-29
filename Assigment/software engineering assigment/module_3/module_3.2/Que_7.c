// WAP to print factorial of given number
#include <stdio.h>
void main(){
    int i,num;
    unsigned long long factorial=1;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num<=0){
        printf("Enter valid number");
    }
    else{
        for(i=1;i<=num;i++){
        factorial*=i;
        }
        printf("factorial of %d is %lld ",num,factorial);
    }
}
#include<stdio.h>
void main(){
    int number;
    printf("Enter month number btween 1 to 12 :");
    scanf("%d",&number);
    if(number==1 || number==3 || number==5 || number==7 || number==9 || number==11){
        printf("31 days");
    }
    else if (number==4 || number==6 || number==8 || number==10 || number==12){
        printf("30 days");
    }
    else{
        printf("28 to 29 days");
    }
}
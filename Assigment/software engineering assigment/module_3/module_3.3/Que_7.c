//  WAP Find out length of string without using inbuilt function
#include<stdio.h>
void main(){
    char name[20],length=0;
    printf("Enter your name:");
    gets(name);
    while (name[length]!=0)
    {
        length++;
    }
    printf("length of string is :%d",length);
}
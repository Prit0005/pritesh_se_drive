//WAP to find reverse of string using recursion
#include<stdio.h>
#include<string.h>
void  igotit(char name[]){
    
  
    return igotit(strrev(name));
    
}
void main(){
    char name[20];
    
    printf("Enter your string here:");
    scanf("%s",&name);
    printf("This is your reverse string %s",strrev(name));
    igotit(name);
    
}
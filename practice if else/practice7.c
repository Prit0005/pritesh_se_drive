#include<stdio.h>
void main(){
    char c;
    printf("Enter character :");
    scanf("%s",&c);
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        printf("%c is a valid character",c);
    }
    else{
        printf("%c is not a valid character",c);
    }
}
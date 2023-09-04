#include<stdio.h>
void main(){
    char c;
    printf("Enter the character :");
    scanf("%c",&c);
    if((c>='a' && c<='z')||(c>='A' && c<='Z')){
        printf("%C is character",c);
    }
    else if (c>='0' && c<='9'){
        printf("%C is a digit",c);
    }
    else {
        printf("%C is a special character",c);
    }
}
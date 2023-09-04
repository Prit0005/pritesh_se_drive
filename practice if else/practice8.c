#include<stdio.h>
void main(){
    char c;
    printf("Enter character :");
    scanf("%c",&c);
    if (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u'||c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U'){
        printf("%c is vowel",c);
    }
    else if( (c >='a' && c <='z') ||( c  >='A' && c <='Z')){
        printf("%c is consonant",c);
    }
    else {
        printf("%c is not valid character");
    }
}
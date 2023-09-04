#include<stdio.h>
void main(){
        char c;
        printf ("Enter character :");
        scanf("%c",&c);
        if(c>='a' && c<='z'){
            printf("%C is lowercase",c);
        }
        else {
            printf("%C is upercase",c);
        }
}
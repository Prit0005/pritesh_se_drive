// WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
void main(){
    char name[20];
    printf("Enter your name:");
    gets(name);
    printf("reverse string is %s",strrev(name));
    int length = 0;
    int h = strlen(name) - 1;
 
    // Keep comparing characters
    // while they are same
    while (h > length) {
        if (name[length++] != name[h--]) {
            printf("\n%s is not a palindrome\n", name);
            return 0;
            // will return from here
        }
    }
 
    printf("\n%s is a palindrome\n", name);

}
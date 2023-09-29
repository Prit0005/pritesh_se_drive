// WAP to show
// 1. Monday to Sunday using switch case

#include <stdio.h>
void main()
{
    int day;
    printf("Enter valid week day number :");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }
}

// 2. Vowel or Consonant using switch case

#include <stdio.h>
void main()
{
    char c;
    printf("Enter character :");
    scanf("%c", &c);
    c = tolower(c);
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("vowel character ");
        break;

    default:
        printf("consonant character ");
        break;
    }
}

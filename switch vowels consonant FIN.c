#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch( ch)
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
        printf("Vowels");
        break;
    default:
        switch( ch)
        {
        case 'a' ... 'z':
        case 'A' ... 'Z':
            printf("Consonant");
            break;
        default:
            printf("NOt an alphabet");
        }

    }

    return EXIT_SUCCESS;
}
/**
Given a Character - check if it is a VOWEL or a CONSONANT,
if it is not an alphabet give an appropriate message
    **/

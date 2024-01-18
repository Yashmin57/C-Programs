#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
    case 'v':
    case 'V':
        printf("Violet");
        break;
    case 'i':
    case 'I':
        printf("INdigo");
        break;
    case 'b':
    case 'B':
        printf("BLUE");
        break;
    case 'g':
    case 'G':
        printf("Green");
        break;
    case 'y':
    case 'Y':
        printf("Yellow");
        break;
    case 'o':
    case 'O':
        printf("Orange");
        break;
    case 'r':
    case 'R':
        printf("Red");
        break;
    default:
        printf("Invalid");

    }

    return EXIT_SUCCESS;
}
/**
Given a Character that represents the colors in a RAINBOW, print the color, if it is not a valid character
print an appropriate ERROR message
    **/

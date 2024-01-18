#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if ((( ch >= 'a')&&( ch <= 122)) || (( ch >= 'A')&&( ch <= 'Z')))
        printf("ALPHABET");
    else
        printf("NOT AN ALPHABET");


    return EXIT_SUCCESS;
}
/**

**/

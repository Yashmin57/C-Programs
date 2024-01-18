#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if ((( ch >= 'a')&&( ch <= 122)) || (( ch >= 'A')&&( ch <= 'Z')))
    {
            if (( ch =='a')|| ( ch =='e')|| ( ch =='i') ||( ch =='o')||
                ( ch =='u')|| ( ch =='A')|| ( ch =='E')|| ( ch =='I')||
                ( ch =='O') || ( ch =='U'))
                printf("VOWELS");
            else
                printf("CONSONANTS");

    }
    else
        printf("NOT AN ALPHABET");


    return EXIT_SUCCESS;
}
/**

**/

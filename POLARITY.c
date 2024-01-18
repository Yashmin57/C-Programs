#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    scanf("%d", &num);
    if ( num >0)
        printf("POSTIVE");
    else
    {
        if ( num ==0)
            printf("ZERO");
        else
            printf("Negative");
    }



    return EXIT_SUCCESS;
}
/**
Given a number check its polarity of the  number.
POSTIVE
NEGATIVE
**/

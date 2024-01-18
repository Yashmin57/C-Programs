#include<stdio.h>
#include<stdlib.h>
int main()
{
    int inp =8;
    int str_ctr;
    int line;

    line = 0;
    while ( line < inp)
    {
        str_ctr =0;
        while ( str_ctr< inp)
        {
            printf(" * ");
            str_ctr+=1;
        }
        printf("\n");
        line +=1;
    }


    return EXIT_SUCCESS;
}
/**
inp =4;
*	*	*	*
*	*	*	*
*	*	*	*
*	*	*	*

**/


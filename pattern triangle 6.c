#include<stdio.h>
#include<stdlib.h>
int main()
{
    int line;
    int inp;
    int space;
    int star;
    inp =4;
    line =2;
    for ( line = inp; line >= 1; line -=1)
    {
        for ( space = 1; space <= inp-line; printf("   "),space+=1);
        for ( star = 1; star <= (line*2)-1; printf(" * "),star+=1);
        for ( space = 1; space <= inp-line; printf("   "),space+=1);
        for ( space = 1; space <= inp-line; printf("   "),space+=1);
        for ( star = 1; star <= (line*2)-1; printf(" * "),star+=1);
        for ( space = 1; space <= inp-line; printf("   "),space+=1);

        printf("\n");
    }


    return EXIT_SUCCESS;
}
/**
			*
		*	*	*
	*	*	*	*	*
*	*	*	*	*	*	*



**/


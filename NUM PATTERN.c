#include<stdio.h>
#include<stdlib.h>
int main()
{
    int line;
    int inp;
    int col;
    inp = 6;

    for ( line = 1; line <= inp; line +=1)
    {
        for ( col = 0 ; col <= inp ; col+=1)
        {
            if ( col ==0 && line % 2 !=1)
                printf("%d ",line+1);
            else if ( col ==inp && line % 2 !=0)
                printf("%d ",line+1);
            else
                printf("%d ", line);
        }


        printf("\n");
    }


    return EXIT_SUCCESS;
}
/**
inp = 6

1	1	1	1	1	1	2
3	2	2	2	2	2	2
3	3	3	3	3	3	4
5	4	4	4	4	4	4
5	5	5	5	5	5	6
7	6	6	6	6	6	6



**/


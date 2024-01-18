#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int ctr;
    int itr;

    itr = 0;
    ctr = 0;
    num = 3;
    while ( itr < 20)
    {
        printf("%d ", num);
        switch( ctr%7)
        {
            case 1:
            case 3:
                num+=1;
                break;
            case 0:
            case 4:
                num+=2;
                break;
            case 2:
            case 5:
            case 6:
                num+=3;
                break;
        }
        ctr+=1;
        itr +=1;
    }

    return EXIT_SUCCESS;
}

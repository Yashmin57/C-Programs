#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int chk_ftr;

    for (num = 2; num <= 100; num+=1)
    {
        for ( chk_ftr = 2; chk_ftr <= num/2; chk_ftr+=1)
        {
            if ( num % chk_ftr ==0)
                break;
        }
        if ( chk_ftr > num/2)
            printf("%d ", num);
    }




    return EXIT_SUCCESS;
}

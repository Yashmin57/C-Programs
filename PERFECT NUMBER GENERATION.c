#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int ftr;
    int sum_ftr;
    //scanf("%d",&num);
    //num = 1000000000;
    num = 6;


    //13count = 2;
    for ( num = 2; num <= 10000; num +=1)
    {

        sum_ftr = 1;

        for ( ftr =2; ftr <= num/2; ftr +=1)
        {
            if ( num % ftr ==0)
                sum_ftr +=ftr;
        }
        if ( num == sum_ftr)
            printf("%d ", num);

    }


    return EXIT_SUCCESS;
}
/**
Print all the factors of a Given 'n'
n=100
**/

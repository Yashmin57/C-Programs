#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int ftr;
    int sum_ftr;
    //scanf("%d",&num);
    //num = 1000000000;
    num = 13;


    //13count = 2;
    sum_ftr = 1+ num;
    for ( ftr =2; ftr <= num/2; ftr +=1)
    {
        if ( num % ftr ==0)
            sum_ftr +=ftr;
    }
    printf("%d ", sum_ftr);

    return EXIT_SUCCESS;
}
/**
Print all the factors of a Given 'n'
n=100
**/

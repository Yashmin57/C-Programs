#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int ftr;
    int count;
    //scanf("%d",&num);
    //num = 1000000000;
    num = 68;


    count = 2;
    for ( ftr =2; ftr <= num/2; ftr +=1)
    {
        if ( num % ftr ==0)
            count+=1;
    }
    printf("%d ", count);

    return EXIT_SUCCESS;
}
/**
Print all the factors of a Given 'n'
n=100
**/

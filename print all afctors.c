#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int ftr;
    //scanf("%d",&num);
    num = 100000000;
    printf("1 ");
    for ( ftr =2; ftr <= num/2; ftr +=1)
    {
        if ( num % ftr ==0)
            printf("%d ", ftr);
    }
    printf("%d ", num);

    return EXIT_SUCCESS;
}
/**
Print all the factors of a Given 'n'
n=100
**/

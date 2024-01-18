#include<stdio.h>
#include<stdlib.h>
int main()
{

    int num;
    int ftr;
    int until;
    num = 73;
    until = ceil(sqrt(num));

    for ( ftr = 2; ftr <= until; ftr+=1)
    {
        if ( num % ftr ==0)
            break;
    }
    //2 ways one for condition other for break; condition is prime
    if ( ftr> until)
        printf("Prime");
    else
        printf("Not ");


    return EXIT_SUCCESS;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{

    int num;
    int ftr;
    int until;
    int count;

    count = 1;

    for (num = 3; num <= 100000000; num +=2)
    {
        until = ceil(sqrt(num));
        for ( ftr = 3; ftr <= until; ftr+=2)
        {
            if ( num % ftr ==0)
                break;
        }
        //2 ways one for condition other for break; condition is prime
        if ( ftr> until)
            count+=1;
    }
    printf("%d ",count);


    return EXIT_SUCCESS;
}

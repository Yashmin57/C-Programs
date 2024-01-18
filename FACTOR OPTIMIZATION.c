#include<stdio.h>
#include<stdlib.h>
int main()
{

    int num;
    int ftr;
    int until;
    num = 100;
    until = ceil(sqrt(num));
    printf("UNITL = %d\n", until);
    for ( ftr = 1; ftr < until; ftr+=1)
    {
        if ( num % ftr ==0)
            printf("%d %d\n", ftr, num/ftr);
    }
    if ( ftr * ftr == num)
        printf("%d ", ftr);


    return EXIT_SUCCESS;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    scanf("%d", &num);
    if ( num % 2 ==0)
        printf("EVEN");
    else
        printf("ODD");
    printf("%d ", num);


    return EXIT_SUCCESS;
}
/**
Given a number check whether it odd or even.
**/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1;
    int num2;
    int prod;
    int itr;
    scanf("%d%d", &num1,&num2);
    itr =1;
    prod =0;
    while ( itr <= num2)
    {
        prod += num1;
        itr+=1;
    }
    printf("%d ", prod);

    return EXIT_SUCCESS;
}
/**
Given two numbers n1 and n2 find the product of n1 and n2 without using '*'

**/

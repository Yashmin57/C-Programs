#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1;
    int num2;
    int next_term;
    int itr;
    int nterms;
    scanf("%d",&nterms);
    num1 =-1; num2 = 1;
    itr = 0;
    while ( itr < nterms)
    {
        next_term = num1 + num2;
        num1 = num2;
        num2 = next_term;
        printf("%d ", next_term);
        itr+=1;
    }

    return EXIT_SUCCESS;
}

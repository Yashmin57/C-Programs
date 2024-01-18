#include<stdio.h>
#include<stdlib.h>
int main()
{
    int start;
    int end;
    int itr;
    scanf("%d%d",&start,&end);
    itr = start%2 ==0?start : start+1;
    while ( itr <= end)
    {
        printf("%d ", itr);
        itr +=2;
    }



    return EXIT_SUCCESS;
}
/**
Print all even numbers in the given range START and END, both inclusive
start
10
end
25
10 12 14 16 18 20 22 24
**/

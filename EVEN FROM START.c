#include<stdio.h>
#include<stdlib.h>
int main()
{
    int start;
    int end;
    int itr;
    scanf("%d%d",&start,&end);
    itr = start;
    while ( itr <= end)
    {
        if ( itr % 2 ==0)
            printf("%d ", itr);

        itr +=1;
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

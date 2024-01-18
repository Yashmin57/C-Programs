#include<stdio.h>
#include<stdlib.h>
int main()
{
    int year;
    scanf("%d",&year);

    if ( year % 4 ==0)
    {
        if ( year %100 ==0)
        {
           if ( year % 400 ==0)
                printf("LEAP YEAR");
           else
            printf("NOT A LEAP");
        }
        else
            printf("LEAP ");
    }
    else
        printf("NOT A LEAP YEAR");

    return EXIT_SUCCESS;
}

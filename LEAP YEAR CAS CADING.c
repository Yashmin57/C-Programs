#include<stdio.h>
#include<stdlib.h>
int main()
{
    int year;
    scanf("%d",&year);

    if ( (( year % 4 ==0) && (year % 100!=0)) || ( year % 400 ==0))
        printf("LEAP YEAR");
    else
        printf("NOT A LEAP YEAR");

    return EXIT_SUCCESS;
}
// 4 , 100 , 400 +. TRUE  LEAP
// 4 , NOT 100   =>LEAP


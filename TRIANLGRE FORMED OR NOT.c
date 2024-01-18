#include<stdio.h>
#include<stdlib.h>
int main()
{
   int len1, len2 , len3;
   scanf("%d%d%d", &len1,&len2, &len3);
   if ( (len1 + len2) > len3)//SIDE 1
   {
       if ( (len1 + len3 )> len2)
       {
           if ( (len2 + len3)> len1)
            printf("TRIANGLE FORMED");
           else
           printf("CANNOT FORM");

       }
       else
            printf("CANNOT FORM");
   }
   else
        printf("CANNOT FORM");

    return EXIT_SUCCESS;
}
/**
Given a number check its polarity of the  number.
POSTIVE
NEGATIVE
**/

#include<stdio.h>
#include<stdlib.h>
#define PI 3.145827
#define MAX(x,y) (x)>(y)? (x): (y)
int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
     printf("MAX OF THREE =%d\n",MAX(MAX(num1,num2), num3));
     printf("%d",MAX(MAX(num1,num2), MAX(num3,num4)));

    return EXIT_SUCCESS;
}
/** MACROS
VARIABLE
function
**/

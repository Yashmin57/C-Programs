#include<stdio.h>
#include<stdlib.h>
int main()
{
    int len1;
    int len2;
    int len3;
    scanf("%d%d%d", &len1, &len2 ,&len3);
    if (( len1 > len2 ) && ( len1 > len3))
        printf("LEN1 ");
    else if (len2 > len3)
        printf("LEN2");
    else
        printf("LEN3");




    return EXIT_SUCCESS;
}
/**

**/

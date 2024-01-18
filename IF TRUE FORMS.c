#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d ", num - 1);
    if ((num - 1))//
        printf("TRUE");
    else
        printf("FALSE");

    return EXIT_SUCCESS;
}

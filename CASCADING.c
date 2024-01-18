#include<stdio.h>
#include<stdlib.h>
int main()
{
   char color;
   scanf("%c", &color);

   if (( printf("Here")-4) || ( color =='V'))
        printf("Violet");
   else if (( printf("Here")-4) || ( color =='I'))
        printf("Indigo");
    else if (( printf("Here")-4)  || ( color =='B'))
        printf("Blue");
    else if (( printf("Here")-4)  || ( color =='G'))
        printf("Green");
    else if (( printf("Here")-4)  || ( color =='Y'))
        printf("YELLOW");
    else if (( printf("Here")-4)  || ( color =='O'))
        printf("ORANGE");
    else if (( color =='r') || ( color =='R'))
        printf("RED");
    else
        printf("Invalid");
    return EXIT_SUCCESS;
}

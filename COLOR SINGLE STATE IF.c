#include<stdio.h>
#include<stdlib.h>
int main()
{
   char color;
   scanf("%c", &color);

   if (( color =='v') || ( color =='V'))
        printf("Violet");
   if (( color =='i') || ( color =='I'))
        printf("Indigo");
    if (( color =='b') || ( color =='B'))
        printf("Blue");
    if (( color =='g') || ( color =='G'))
        printf("Green");
    if (( color =='y') || ( color =='Y'))
        printf("YELLOW");
    if (( color =='o') || ( color =='O'))
        printf("ORANGE");
    if (( color =='r') || ( color =='R'))
        printf("RED");
    if (( color =='v') || ( color =='V'))
        printf("Violet");
    else
        printf("Invalid");
    return EXIT_SUCCESS;
}

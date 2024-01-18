#include<stdio.h>
#include<stdlib.h>
int main()
{
    int itr;
    int mul_3;
    int mul_5;
    itr = 0;
    mul_3 = 3;
    mul_5 = 5;
    while ( itr < 20)
    {
        while (mul_3 < mul_5 )
        {
            printf("%d ",mul_3);
            itr +=1;
            mul_3 +=3;
        }
        while (mul_5 < mul_3 )
        {
            printf("%d ",mul_5);
            itr+=1;
            mul_5 +=5;
        }
        while ( mul_3 == mul_5)
        {
            printf("%d ",mul_5);
            itr+=1;
            mul_5 +=5;
            mul_3 +=3;
        }

    }




    return EXIT_SUCCESS;
}

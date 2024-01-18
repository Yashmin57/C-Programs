#include<stdio.h>
int main()
{
    int num1;
    int num2;
    num1 = 22;
    num2 = 7;

    printf("num1: %d +  num2:%d = %d\n", num1, num2, num1+num2);
    printf("num1: %d -  num2:%d = %d\n", num1, num2, num1-num2);
    printf("num1: %d *  num2:%d = %d\n", num1, num2, num1*num2);
    printf("num1: %d /  num2:%d = %.8f\n", num1, num2, (num1*1.0)/num2);
    printf("num1: %d %%  num2:%d = %d\n", num1, num2, num1%num2);

    return 0;//RETURN 0;
}
// print format-> width.precision for ( integer precision)


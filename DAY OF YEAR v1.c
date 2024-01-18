#include<stdio.h>
#include<stdlib.h>
int main()
{
    int day;
    int month;

    int tot_days;
    scanf("%d%d", &day, &month);

    switch( month)
    {
    case 1:
        tot_days = day;
        break;
    case 2:
        tot_days = 31+day;
        break;
    case 3:
        tot_days = 59+day;
        break;
    case 4:
        tot_days = 90+day;
        break;
    case 5:
        tot_days = 120+day;
        break;
    case 6:
        tot_days = 151+day;
        break;
    case 7:
        tot_days = 181+day;
        break;
    case 8:
        tot_days = 212+day;
        break;
    case 9:
        tot_days = 243+day;
        break;
    case 10:
        tot_days = 273+day;
        break;
    case 11:
        tot_days = 303+day;
        break;
    case 12:
        tot_days = 334+day;
        break;
    default:
        printf("INvalid");
    }
    printf("%d ", tot_days);


    return EXIT_SUCCESS;
}
/**

**/

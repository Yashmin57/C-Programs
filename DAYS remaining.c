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
        tot_days = 31;
    case 2:
        tot_days += 28;
    case 3:
        tot_days += 31;
    case 4:
        tot_days += 30;
    case 5:
        tot_days += 31;
    case 6:
        tot_days += 30;
    case 7:
        tot_days += 31;
    case 8:
        tot_days += 31;
    case 9:
        tot_days += 30;
    case 10:
        tot_days += 31;
    case 11:
        tot_days += 30;
    case 12:
        tot_days += 31;
        break;
    default:
        printf("Invalid");
    }

    printf("%d ", tot_days-day);


    return EXIT_SUCCESS;
}
/**

**/

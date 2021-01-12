#include <stdio.h>
#include <stdlib.h>


struct date // definition of struct
{
    int day;
    int month;
    int year;
}yesterday; // declaring of variable called yesterday: optional

int main()
{
    // declaration of variables from struct
    struct date today;
    struct date tomorrow;

    // assign values to variables
    today.day = 13;
    today.month = 1;
    today.year = 2020;

    tomorrow.day = 14;
    tomorrow.month = 1;
    tomorrow.year = 2020;

    printf("Today's date is %i/%i/%i.\n", today.day, today.month, today.year);

    printf("Tomorrow's date is %i/%i/%i.\n", tomorrow.day, tomorrow.month, tomorrow.year);

    return 0;
}
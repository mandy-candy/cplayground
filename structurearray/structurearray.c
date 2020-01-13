#include <stdio.h>
#include <stdlib.h>

struct date // definition of struct
{
    int day;
    int month;
    int year;
};

struct date myDates[10]; // definition of array struct

int main()
{
    myDates[1].day = 2;
    myDates[1].month = 8;
    myDates[1].year = 2020;

    myDates[2].day = 14;
    myDates[2].month = 1;
    myDates[2].year = 2020;

    printf("Index 1 date is %i/%i/%i.\n", myDates[1].day, myDates[1].month, myDates[1].year);

    printf("Index 2 date is %i/%i/%i.\n", myDates[2].day, myDates[2].month, myDates[2].year);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct date // definition of struct
{
    int day;
    int month;
    int year;
};

struct time // definition of struct
{
    int hours;
    int minutes;
    int seconds;
};

struct dateAndTime // definition of struct
{
    struct date sdate;
    struct time stime;
};



int main()
{
    struct dateAndTime event;

    event.sdate.day = 8;
    event.sdate.month = 2;
    event.sdate.year = 2020;

    event.stime.hours = 14;
    event.stime.minutes = 1;
    event.stime.seconds = 21;

    printf("Date is %i/%i/%i.\n", event.sdate.day, event.sdate.month, event.sdate.year);

    printf("Time is %i:%i:%i.\n", event.stime.hours, event.stime.minutes, event.stime.seconds);

    return 0;
}
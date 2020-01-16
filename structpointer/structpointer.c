#include <stdio.h>
#include <stdlib.h>

struct date // definition of struct
{
    int day;
    int month;
    int year;
};

struct intPtrs
{
    int *p1;
    int *p2;
};

/*

foo->bar is equivalent to (*foo).bar,
 i.e. it gets the member called bar from the struct that foo points to.


*/

int main()
{

    struct date today, *datePtr;
    
    datePtr = &today;
    
    (*datePtr).day = 9;

   //() datePtr->day = 9;
    datePtr->month = 10;
    datePtr->year = 2020;

    printf("Todays date is %i/%i/%i.\n", datePtr->day, datePtr->month, datePtr->year);


    struct intPtrs pointers;
    int i1 = 100;
    int i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i1 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);

    return 0;
}
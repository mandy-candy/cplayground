#include <stdio.h>

int main()
{
    enum companys {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum companys first, second, third;

    first = XEROX;
    second = GOOGLE;
    third = EBAY;

    printf("first = %d\n", first);
    printf("second = %d\n", second);
    printf("third = %d\n", third);

    return 0;




}
#include <stdio.h>

int main()
{
    //enums
    //defining enum
    enum primaryColor {red, yellow, blue};

    //declaring enum
    enum primaryColor myColor, gregsColor;

    //assign variables
    myColor = red;
    gregsColor = blue;

    printf("%d\n", myColor);
    printf("%d\n", gregsColor);

    //chars (single character in 'a')
    //declare char
    char broiled;
    //assign char
    broiled = 'P';

    char x = '\n';

    float xy = 3.543346775544;

    printf("%.2f", xy);


    return 0;
}
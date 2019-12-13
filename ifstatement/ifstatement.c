#include <stdio.h>

int main()
{
    int number, sign;

    number = 12;
    
    if (number < 0) {
        sign = -1;
    } else if (number == 0) {
        sign = 0;
        } else {
            sign = 1;
            }

    printf("Sign = %i\n", sign);

    //ternary statement
    sign = number < 0 ? -1 : 1;

    printf("Sign = %i\n", sign);
}
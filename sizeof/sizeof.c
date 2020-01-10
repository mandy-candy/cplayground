#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Int : %zd\n", sizeof(int));
    printf("Char : %zd\n", sizeof(char));
    printf("Float : %zd\n", sizeof(float));
    printf("Long : %zd\n", sizeof(long));
    printf("Long long : %zd\n", sizeof(long long));
    printf("Double : %zd\n", sizeof(double));
    printf("Long double : %zd\n", sizeof(long double));

    return 0;
}
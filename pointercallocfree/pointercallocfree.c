#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *str;

    //initial memory allocation
    str = (char *) malloc(15 * sizeof(char));
    strcpy(str, "mandy");
    printf("String = %s, Address = %p\n", str, str);

    // reallocating memory
    str = (char *) realloc(str, 25 * sizeof(char));
    strcat(str, "candy");
    printf("String = %s, Address = %p\n", str, str);

    free(str);

    return 0;
}
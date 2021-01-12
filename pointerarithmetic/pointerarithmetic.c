#include <string.h>
#include <stdio.h>

int main (void)
{
    int i;

    char multiple[] = "a string";
    char *p = multiple;

    for(i = 0 ; i < strlen(multiple) ; ++i )

    printf("multiple[%d] = %c *(p+%d) = %c &multiple[%d] = %p p+%d = %p\n",
                    i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);


    int j;
    long multipleLong[] = {15L, 25L, 35L, 45L};
    long *q = multipleLong;

    for(j = 0 ; j < sizeof(multipleLong)/sizeof(multipleLong[0]) ; ++j)

    printf("address q+%d (&multipleLong[%d]) : %llu *(q+%d) value: %d\n",
                    j, j, (unsigned long long) (q+j), j, *(q+j));

    printf("\n Type long occupies: %d bytes\n", (int)sizeof(long));
    
    return 0;
}
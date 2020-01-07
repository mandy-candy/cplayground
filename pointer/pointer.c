#include <stdio.h>
#include <string.h>
#include <stdlib.h>


   // initializing pointer to NULL
    int *pNumber = NULL;


// main function
int main(void)
{   

    // initializing pointer
    int number = 99;
 
    int *pNumber = &number;
    int result = 0;

    result = *pNumber + 1;

    printf("The result is: %d\n", result);
    // value which the pointer is pointing
    printf("The value from pointer is: %d\n", *pNumber);
    // the address of where pointer is stored
    printf("The pointers address is: %p\n", (void*)&pNumber);
    // the value of the pointer
    printf("Value of the pNumber: %p\n", pNumber);
    // the address of where the pointer is pointing
    printf("The address of the pointed variable is: %p\n", &number);
    // size of pointer in memory
    printf("Size of pointer in memory: %d bytes\n", (int)sizeof(&pNumber));

    return 0;
}


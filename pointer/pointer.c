#include <stdio.h>
#include <string.h>
#include <stdlib.h>


   // initializing pointer to NULL
    int *pNumber = NULL;


// main function
int main(void)
{   

    // variable
    int number = 99;
    int result = 0;
    // initializing pointer to variable number using the &
    pNumber = &number;
    // *pNumber is the value the pointer is pointing to
    result = *pNumber + 1;

    // define a constant value of pointer
    int value = 5254;
    const int *pValue = &value;
    printf("The value from pointer is: %d\n", *pValue);
    // define a constant pointer address
    int value2 = 4;
    int *const pValue2 = &value2;
    printf("The value from pointer is: %d\n", *pValue2);


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


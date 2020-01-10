#include <string.h>
#include <stdio.h>


void swap();
void swapAddress();

int main (void)
{
    // local variable definition
    int a = 100;
    int b = 200;

    printf("Before swap, value of a : %d\n", a);
    printf("Before swap, value of b : %d\n", b);

    // calling the function to swap values
    swap(a, b);

    printf("After swap, value of a : %d\n", a);
    printf("After swap, value of b : %d\n", b);

    swapAddress(&a, &b);

    printf("After swapAddress, value of a : %d\n", a);
    printf("After swapAddresss, value of b : %d\n", b);

    return 0;
}

void swap(int x, int y)
{
    int temp;

    temp = x;   // save value of x
    x = y;      // put y into x
    y = temp;   // put temp into y

    return;
}

void swapAddress(int *x, int *y)
{
    int temp;

    temp = *x;   // save value of x
    *x = *y;      // put y into x
    *y = temp;   // put temp into y

    return;
}

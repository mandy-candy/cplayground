#include <stdio.h>
#include <stdlib.h>

// function prototype
int multiplyTwoNumbers(int x, int y);

// main function
int main(void)
{
    int result = 0;
    // function call & return data to variable result
    result = multiplyTwoNumbers(10, 20);

    printf("result is %d\n", result);
    return 0;
}

// function declaration
int multiplyTwoNumbers(int x, int y)
    {
        int result = x * y;
        // return data to variable result
        return result;
    }
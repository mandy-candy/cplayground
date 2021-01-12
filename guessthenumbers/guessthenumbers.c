#include <stdio.h>
#include <stdlib.h>
#include <time.h>   // For random number generator seed


int main()
{
    // Create time variable
    time_t t;
    // Initialise the random number generator
    srand((unsigned)time(&t));
    // Get the random number (0-20) and store in an int variable
    int randomNumber = rand() % 21;

    


    return 0;
}
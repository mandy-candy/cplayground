#include <stdio.h>


int main()
{
    
    double minutesInYear, years, days, userInput;
    int minutesEntered = 0;

    //get user input
    printf("Enter minutes: ");
    scanf("%d", &minutesEntered);

    minutesInYear = (60 * 24 * 365);
    years = (minutesEntered / minutesInYear);
    days = (minutesEntered / 60.0) / 24.0;

    printf("%d minutes is approximately %f years and %f days\n", minutesEntered, years, days);

    return 0;
}
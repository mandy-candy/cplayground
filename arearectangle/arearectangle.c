#include <stdio.h>

int main()
{
    double width, height, perimeter, area;

    width = 23.34563;
    height = 145.23543;

    perimeter = 2.0 * (width + height);
    area = width * height;

    printf("Widht = %.2fm \n", width);
    printf("Height = %.2fm \n", height);
    printf("Perimeter = %.2fm \n", perimeter);
    printf("Area = %.2fm^2 \n", area);


}
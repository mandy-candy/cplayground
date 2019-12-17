#include <stdio.h>

int main()
{
    int userHours = 30;
    float basicPayRate = 12.0;
    int totalNormalHours;
    float totalOverHours;
    float grossPay;
    float totalHours;
    float tax1, tax2, tax3, totTax;
    float afterTax1, afterTax2, afterTax3;

    float netPay;

    if (userHours > 40)
    {
        totalNormalHours = 40;
        totalOverHours = 1.5 * (userHours - 40);
    }
    else
    {
        totalNormalHours = userHours;
        totalOverHours = 0;
    }

    printf("Total normal hours: %d, Total over hours: %.1f\n", totalNormalHours, totalOverHours);

    totalHours = totalNormalHours + totalOverHours;
    printf("Total calculated hours: %.1f", totalHours);

    grossPay = basicPayRate * totalHours;
    printf("Total calculated gross pay: %.1f\n", grossPay);

    if (grossPay > 450)
    {
        afterTax1 = (300.0 / 100.0) * 85.0;
        tax1 = (300.0 / 100.0) * 15.0;
        afterTax2 = (150.0 / 100.0) * 80.0;
        tax2 = (150.0 / 100.0) * 20.0;
        afterTax3 = ((grossPay - 450.0) / 100) * 75.0;
        tax3 = ((grossPay - 450.0) / 100) * 25.0;
    }
    else
    {
        afterTax1 = (300.0 / 100.0) * 85.0;
        tax1 = (300.0 / 100.0) * 15.0;
        afterTax2 = ((grossPay - 300.0) / 100.0) * 80.0;
        tax2 = ((grossPay - 300.0) / 100.0) * 20.0;
        afterTax3 = 0.0;
        tax3 = 0.0;
    }
    
     printf("afterTax1: %.1f tax1: %.1f\n", afterTax1, tax1);
     printf("afterTax2: %.1f tax2: %.1f\n", afterTax2, tax2);
     printf("afterTax3: %.1f tax3: %.1f\n", afterTax3, tax3);

    netPay = afterTax1 + afterTax2 + afterTax3;
    totTax = tax1 + tax2 + tax3;
    printf("Total taxes: %.1f\n", totTax);
    printf("Net pay: %.1f\n", netPay);

    return 0;
}
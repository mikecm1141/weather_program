/*
*   Purpose: To practice using multidimensional arrays in C. This program will
*            the provided weather data for 5 years and each of its 12 motnhs
*            of rainfall. It will output each year with its total rainfall.
*            It will also calculate the yearly average for the given dataset.
*            It will then output each month name with the monthly averages for
*            the total dataset.
*/

#include <stdio.h>
#include <stdlib.h>

#define TOTAL_YEARS 5
#define MONTHS 12

int main()
{
    float totalSum;
    
    float tmpSum = 0;
    float weather[TOTAL_YEARS][MONTHS] = {
        {6.6, 3.2, 1.2, 3.2, 6.7, 3.3, 8.9, 3.5, 2.3, 6.3, 2.3, 2.3},
        {2.2, 9.6, 2.3, 6.3, 3.3, 2.9, 2.6, 7.3, 3.1, 9.2, 6.2, 3.1},
        {6.4, 3.9, 4.2, 7.4, 7.5, 3.4, 2.4, 8.4, 7.8, 2.3, 8.6, 4.3},
        {6.1, 1.2, 8.2, 3.2, 6.7, 3.3, 8.9, 3.5, 2.3, 2.3, 3.3, 2.3},
        {4.6, 7.2, 3.2, 4.2, 2.7, 1.3, 3.9, 8.5, 7.3, 4.3, 5.3, 2.3}
    };

    printf("\nYEAR  RAINFALL (inches)\n");

    for (int i = 0; i < TOTAL_YEARS; ++i)
    {
        tmpSum = 0;

        for (int j = 0; j < MONTHS; ++j)
            tmpSum += weather[i][j];

        totalSum += tmpSum;
        printf("201%d  %.2f\n", i, tmpSum);
    }

    printf("\nThe yearly average is %.2f inches.\n", totalSum / TOTAL_YEARS);
    printf("\nMonthly Averages\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (int i = 0; i < MONTHS; ++i)
    {
        tmpSum = 0;

        for (int j = 0; j < TOTAL_YEARS; ++j)
            tmpSum += weather[j][i];

        printf("%4.1f ", tmpSum / TOTAL_YEARS);
    }

    return 0;
}

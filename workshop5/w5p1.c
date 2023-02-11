/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
Full Name  : Utsav Gautam
Student ID#: 157891219
Email      : ugautam4@myseneca.ca
Section    : ZCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// macros
#define MIN_YEAR 2012
#define MAX_YEAR 2022

int main(void)
{
    // declare constant variables
    const int JAN = 1, DEC = 12, startDate = 01;
    // flag variable
    int continueLoop;
    // get input from the user
    int enterYear, enterMonth;

    // display to the user
    printf("General Well-being Log\n");
    printf("======================\n");

    // continue loop untill the right value is entered
    do
    { // keep the value of continueLoop to 0 so when the loop starts flag will be updated to 0
        continueLoop = 0;
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &enterYear, &enterMonth);
        if (enterYear < MIN_YEAR || enterYear > MAX_YEAR)
        {
            printf("  ERROR: The year must be between %d and %d inclusive\n", MIN_YEAR, MAX_YEAR);
            if (enterMonth < JAN || enterMonth > DEC)
            {
                printf("  ERROR: Jan.(%d) - Dec.(%d)\n", JAN, DEC);
            }
            continueLoop = 1;
        }
        else if (enterMonth < JAN || enterMonth > DEC)

        {
            printf("  ERROR: Jan.(%d) - Dec.(%d)\n", JAN, DEC);
            continueLoop = 1;
            // This flag will tell that there has been a interruption and exits out
            // of the loop and set the continueLoop value to 0
        }
    } while (continueLoop); // while flag points out there has been interruption run the loop
    printf("\n\n");
    printf("*** Log date set! ***\n\n");
    printf("Log starting date: %d-", enterYear);
    // using switch case statement to check for the month and display it
    switch (enterMonth)
    {
    case 1:
        printf("JAN");
        break;
    case 2:
        printf("FEB");
        break;
    case 3:
        printf("MAR");
        break;
    case 4:
        printf("APR");
        break;
    case 5:
        printf("MAY");
        break;
    case 6:
        printf("JUN");
        break;
    case 7:
        printf("JUL");
        break;
    case 8:
        printf("AUG");
        break;
    case 9:
        printf("SEP");
        break;
    case 10:
        printf("OCT");
        break;
    case 11:
        printf("NOV");
        break;
    case 12:
        printf("DEC");
        break;
    }
    printf("-%d", startDate);
    // print the date as 01 for all months which is already hold by startDate variable

    return 0;
}
/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
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

// define macros here
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

// Entry point to the application
int main(void)
{
    // constant variable which cannot be changed
    const int JAN = 1, DEC = 12;
    // varaiable declared and set to safe state
    int getYear = 0, getMonth = 0, continueLoop, j;
    // declared double variable set to safe state
    double getMorningRating = 0.0, getEveningRating = 0.0, sumOfMorningRating = 0.0, sumOfEveningRating = 0.0;

    // display info to the user
    printf("General Well-being Log\n");
    printf("======================\n");

    // check and repeat the year and month entery until right value entered
    do
    {
        // update continue loop to 0
        continueLoop = 0;

        // get input from user
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &getYear, &getMonth);
        // check if the user input is less or greater than min and max value
        if (getYear < MIN_YEAR || getYear > MAX_YEAR)
        {
            printf("   ERROR: The year must be between %d and %d inclusive\n", MIN_YEAR, MAX_YEAR);

            if (getMonth < JAN || getMonth > DEC)
            {
                printf("   ERROR: Jan.(%d) - Dec.(%d)\n", JAN, DEC);
            }

            continueLoop = 1;
        }

        else if (getMonth < JAN || getMonth > DEC)
        {
            printf("   ERROR: Jan.(%d) - Dec.(%d)\n", JAN, DEC);
            continueLoop = 1;
        }

    } while (continueLoop);

    printf("\n");

    printf("*** Log date set! ***\n");

    // start getting date and determining the month based on the input
    for (j = 0; j < LOG_DAYS; j++)
    {
        printf("\n");
        printf("%d-", getYear);

        // Selection of the month
        switch (getMonth)
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

        default:
            printf("DEC");
            break;
        }

        printf("-%.2d\n", j + 1);

        // get morning rating from user and validate with condition
        do
        { // update continueLoop to 0
            continueLoop = 0;

            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &getMorningRating);

            // validate the rating input
            if (getMorningRating < 0.0 || getMorningRating > 5.0)
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                continueLoop = 1;
                // set the value continueLoop to 1 when there is error so the loop will begin again
            }
        } while (continueLoop);

        // get evening rating from user and then validate
        do
        {
            // update continue loop to 0
            continueLoop = 0;

            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &getEveningRating);

            if (getEveningRating < 0.0 || getEveningRating > 5.0)
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                continueLoop = 1;
                // set the value of continueLoop to 1 so the loop will ask user input again
            }
        } while (continueLoop);

        // calculate the ratings
        sumOfMorningRating += getMorningRating;
        sumOfEveningRating += getEveningRating;
    }

    printf("\n");

    // show the summary to the user
    printf("Summary\n");
    printf("=======\n");
    printf("Morning total rating: %6.3lf\n", sumOfMorningRating);
    printf("Evening total rating: %6.3lf\n", sumOfEveningRating);
    printf("----------------------------\n");
    printf("Overall total rating: %6.3lf\n\n", sumOfMorningRating + sumOfEveningRating);

    printf("Average morning rating: %4.1lf\n", sumOfMorningRating / LOG_DAYS);
    printf("Average evening rating: %4.1lf\n", sumOfEveningRating / LOG_DAYS);
    printf("----------------------------\n");
    printf("Average overall rating: %4.1lf\n", (sumOfMorningRating + sumOfEveningRating) / (LOG_DAYS * 2.0));

    return 0;
}

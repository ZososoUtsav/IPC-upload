/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P2)
Full Name  : utsav gautam
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
#define MIN_INCOME 500.00
#define MAX_INCOME 400000.00
#define MAX_NUM_ITEMS 10
#define MIN_NUM_ITEMS 1
#define MIN_ITEM_COST 100.00

int main(void)
{
    // declare variables
    double getMontlyIncome;
    int numOfWishes, keepGoing, i;
    double itemCost[MAX_NUM_ITEMS] = {0.00};

    int priority[MAX_NUM_ITEMS];
    char financingOption[MAX_NUM_ITEMS] = {'\0'};
    double totalItemCost = 0.00;
    int userSelection, financedStatus;
    double forecastedYear = 0.0, forecastedMonth = 0.0;

    // display info to the user
    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n\n");

    // do this untill the user enter valid montly income
    // Validation#1 for montly income
    do
    {
        keepGoing = 0;
        printf("Enter your monthly NET income: $");
        scanf("%lf", &getMontlyIncome);
        if (getMontlyIncome < MIN_INCOME)
        {
            printf("ERROR: You must have a consistent monthly income of at least $%.2lf\n\n", MIN_INCOME);
            keepGoing = 1;
        }

        else if (getMontlyIncome > MAX_INCOME)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2lf\n\n", MAX_INCOME);
            keepGoing = 1;
        }
    } while (keepGoing);
    printf("\n"); // prints a new line if doesn't go through if else statement

    // Validation #2 for wishlisht item
    do
    {
        keepGoing = 0;

        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &numOfWishes);
        if (numOfWishes < MIN_NUM_ITEMS || numOfWishes > MAX_NUM_ITEMS)
        {
            printf("ERROR: List is restricted to between %d and %d items.\n\n", MIN_NUM_ITEMS, MAX_NUM_ITEMS);
            keepGoing = 1;
        }
    } while (keepGoing);

    // for items

    for (i = 0; i < numOfWishes; i++)
    {
        printf("\n");
        printf("Item-%d Details:\n", i + 1);

        do
        {
            printf("   Item cost: $");
            scanf("%lf", &itemCost[i]);
            if (itemCost[i] < MIN_ITEM_COST)
            {
                printf("      ERROR: Cost must be at least $%.2lf\n", MIN_ITEM_COST);
            }
        } while (itemCost[i] < MIN_ITEM_COST);

        // priority
        do
        {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[i]);
            if (priority[i] < 1 || priority[i] > 3)
            {
                printf("      ERROR: Value must be between 1 and 3\n");
            }
        } while (priority[i] < 1 || priority[i] > 3);
        do
        {
            printf("   Does this item have financing options? [y/n]: ");
            scanf("%s", &financingOption[i]);
            if (financingOption[i] != 'y' && financingOption[i] != 'n')
            {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }
        } while (financingOption[i] != 'y' && financingOption[i] != 'n');
    }
    printf("\n");

    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");

    for (i = 0; i < numOfWishes; i++)
    {
        printf("%3d  %5d    %5c    %11.2lf\n", i + 1, priority[i], financingOption[i], itemCost[i]);

        totalItemCost = totalItemCost + itemCost[i];
    }

    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n\n", totalItemCost);

    // start part 2
    do
    {
        // update flag to 0
        keepGoing = 0;

        // display and get the user selection
        printf("How do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n");
        printf(" 2. By priority\n");
        printf(" 0. Quit/Exit\n");
        printf("Selection: ");
        scanf("%d", &userSelection);
        // print newline
        printf("\n");

        // if user inputs 1
        if (userSelection == 1)
        {
            printf("====================================================\n");
            printf("Selection:   All items\n");
            printf("Amount:   $%1.2lf\n", totalItemCost);

            // calculate the forecast for the year and month
            forecastedYear = (((totalItemCost * 100) / (getMontlyIncome * 100)) + 0.5) / 12;
            forecastedMonth = (forecastedYear - (int)forecastedYear) * 12;

            printf("Forecast: %d years, %.0lf months\n", (int)forecastedYear, forecastedMonth);

            // verify with financing option

            financedStatus = 0;
            for (i = 0; i < numOfWishes && !financedStatus; i++)
            {
                if (financingOption[i] == 'y')
                {
                    financedStatus++;
                    // increase
                }
            }
            // status 1 run this
            if (financedStatus == 1)
            {
                printf("NOTE: Financing options are available on some items.\n");
                printf("      You can likely reduce the estimated months.\n");
            }
            printf("====================================================\n\n");

            keepGoing = 1;
        }

        // if user inputs 2
        else if (userSelection == 2)
        {
            do
            {
                keepGoing = 0;

                printf("What priority do you want to filter by? [1-3]: ");
                scanf("%d", &userSelection);
                printf("\n");

                // check if the given input is between the accepted value
                // if not display this
                if ((userSelection < 1) || (userSelection > 3))
                {
                    printf("ERROR: Invalid menu Selection.\n\n");

                    keepGoing = 1;
                }

            } while (keepGoing);

            printf("====================================================\n");
            printf("Selection:   by priority (%d)\n", userSelection);

            // sum with priroity
            totalItemCost = 0.0;
            financedStatus = 0;
            for (i = 0; i < numOfWishes; i++)
            {
                if (userSelection == priority[i])
                {
                    totalItemCost += itemCost[i];

                    if (financingOption[i] == 'y')
                    {
                        financedStatus++;
                    }
                }
            }

            printf("Amount:   $%1.2lf\n", totalItemCost);

            // calculate year and month
            forecastedYear = (((totalItemCost * 100) / (getMontlyIncome * 100)) + 0.5) / 12;
            forecastedMonth = (forecastedYear - (int)forecastedYear) * 12;

            printf("Forecast: %d years, %.0lf months\n", (int)forecastedYear, forecastedMonth);

            // if financing option display this
            if (financedStatus == 1)
            {
                printf("NOTE: Financing options are available on some items.\n");
                printf("      You can likely reduce the estimated months.\n");
            }
            printf("====================================================\n\n");

            keepGoing = 1;
        }

        // display this if wrong selectoin
        else if ((userSelection < 0) || (userSelection > 2))
        {
            printf("ERROR: Invalid menu Selection.\n\n");

            keepGoing = 1;
        }

        else
        {
            keepGoing = 0;
        }

    } while (keepGoing);
    printf("Best of luck in all your future endeavours!\n\n");

    return 0;
}

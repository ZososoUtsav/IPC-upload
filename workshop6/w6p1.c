/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
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
    double itemCost[] = {0.00};
    int priority[MAX_NUM_ITEMS];
    char financingOption[MAX_NUM_ITEMS];
    double totalItemCost = 0.00;

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
    printf("Best of luck in all your future endeavours!\n\n");

    return 0;
}

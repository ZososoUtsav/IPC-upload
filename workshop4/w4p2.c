/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Utsav Gautam
Student ID#: 157891219
Email      : ugautam4@myseneca.ca
Section    : ZCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// entry point to the application
int main(void)
{
    // declare variables
    int neededApples, neededOranges, neededPears, neededTomatoes, neededCabbage, contShopping = 1;
    int pickedApples = 0, pickedOranges, pickedPears, pickedTomatoees, pickedCabbage;

    // diplay info to the user
    printf("Grocery Shopping\n");
    printf("================\n");

    // condition
    // This loop runs till the user enters 0 to exit
    while (contShopping == 1)
    {
        /* Taking input from the user and asking input untill the
         input is greater than or equal to 0 */

        // Apples
        do
        {
            printf("How many APPLES do you need? : ");
            scanf("%d", &neededApples);
            if (neededApples < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (neededApples < 0);
        printf("\n");

        // Oranges
        do
        {
            printf("How many ORANGES do you need? : ");
            scanf("%d", &neededOranges);
            if (neededOranges < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (neededOranges < 0);
        printf("\n");

        // Pears
        do
        {
            printf("How many PEARS do you need? : ");
            scanf("%d", &neededPears);
            if (neededPears < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (neededPears < 0);
        printf("\n");

        // Tomatoes
        do
        {
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &neededTomatoes);
            if (neededTomatoes < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (neededTomatoes < 0);
        printf("\n");

        // Cabbages
        do
        {
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &neededCabbage);
            if (neededCabbage < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        } while (neededCabbage < 0);
        printf("\n");

        // Picking product phase
        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");
        // Apple picking
        while (neededApples > 0)
        {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &pickedApples);
            if (pickedApples > neededApples)
            {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", neededApples);
            }
            else if (pickedApples <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (neededApples > pickedApples)
            {
                printf("Looks like we still need some APPLES...\n");
                neededApples = neededApples - pickedApples;
            }

            else
            {
                neededApples = neededApples - pickedApples;
                printf("Great, that's the apples done!\n\n");
            }
        }

        // Oranges picking
        while (neededOranges > 0)
        {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &pickedOranges);
            if (pickedOranges > neededOranges)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", neededOranges);
            }
            else if (pickedOranges <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (pickedOranges < neededOranges)
            {
                printf("Looks like we still need some ORANGES...\n");
                neededOranges = neededOranges - pickedOranges;
            }

            else
            {
                printf("Great, that's the oranges done!\n\n");
                neededOranges = neededOranges - pickedOranges;
            }
        }
        // pear picking
        while (neededPears > 0)
        {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &pickedPears);
            if (pickedPears > neededPears)
            {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", neededPears);
            }
            else if (pickedPears <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (pickedPears < neededPears)
            {
                printf("Looks like we still need some PEARS...\n");
                neededPears = neededPears - pickedPears;
            }

            else
            {
                neededPears = neededPears - pickedPears;
                printf("Great, that's the pears done!\n\n");
            }
        }
        // Tomatoes picking
        while (neededTomatoes > 0)
        {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &pickedTomatoees);
            if (pickedTomatoees > neededTomatoes)
            {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", neededTomatoes);
            }
            else if (pickedTomatoees <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (pickedTomatoees < neededTomatoes)
            {
                printf("Looks like we still need some TOMATOES...\n");
                neededTomatoes = neededTomatoes - pickedTomatoees;
            }

            else
            {
                printf("Great, that's the oranges done!\n\n");
                neededTomatoes = neededTomatoes - pickedTomatoees;
            }
        }
        // Cabbages picking
        while (neededCabbage > 0)
        {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &pickedCabbage);
            if (pickedCabbage > neededCabbage)
            {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", neededCabbage);
            }
            else if (pickedCabbage <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if (pickedCabbage < neededCabbage)
            {
                printf("Looks like we still need some CABBAGES...\n");
                neededCabbage = neededCabbage - pickedCabbage;
            }
            else
            {
                neededCabbage = neededCabbage - pickedCabbage;
                printf("Great, that's the cabbages done!\n\n");
            }
        }
        printf("All the items are picked!\n\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &contShopping);
        printf("\n");
        if (contShopping == 0)
        {
            contShopping = 0;
            printf("Your tasks are done for today - enjoy your free time!\n\n");
        }
        else
        {
            contShopping = 1;
        }
    }
    return 0;
}

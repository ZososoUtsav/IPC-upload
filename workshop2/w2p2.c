/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  : utsav gautam
Student ID#: 157891219
Email      : ugautam4@myseneca.com
Section    : ZCC

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    // variables needed initiated below

    // declare variable and set to a safe state
    double smallShirtPrice = 0.0, mediumShirtPrice = 0.0, largeShirtPrice = 0.0;

    int patQty, salQty, tomQty;
    int smallSubTotalcent = 0, medSubTotalCent = 0, largeSubTotalCent;
    int taxesForSmall = 0, taxesForMedim = 0, taxesForLarge = 0;
    int smallFinalTotal = 0, mediumFinalTotal = 0, largeFinalTotal = 0;
    int finalSubtotalCents = 0, taxesTotal = 0, finalTotalPrice = 0;
    int val = 0, change = 0, averagePrice = 0;

    // displaying and getting input from user
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &smallShirtPrice);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &mediumShirtPrice);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &largeShirtPrice);
    printf("\n");

    // Display the input in format
    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  :$%.2lf\n", smallShirtPrice);
    printf("MEDIUM :$%.2lf\n", mediumShirtPrice);
    printf("LARGE  :$%.2lf\n\n", largeShirtPrice);

    // taking patty's input
    printf("Patty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &patQty);
    printf("\n");

    // taking tommy's input
    printf("Tommy's shirt size is \'%c\'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &tomQty);
    printf("\n");

    //  taking sally's input
    printf("Sally's shirt size is \'%c\'\n", salSize);
    printf("Number of shirt Sally is buying: ");
    scanf("%d", &salQty);
    printf("\n");

    // converting the subtotal into cents
    // calculation done by quantity multiplied by shirt prices and multiplying with 100
    smallSubTotalcent = (patQty * smallShirtPrice) * 100;
    medSubTotalCent = (salQty * mediumShirtPrice) * 100;
    largeSubTotalCent = (tomQty * largeShirtPrice) * 100;

    // here all of the prices have been converted to cents by multipying with 100

    // calcualation of tax rate for all
    taxesForSmall = smallSubTotalcent * TAX + 0.5;
    taxesForMedim = medSubTotalCent * TAX + 0.5;
    taxesForLarge = largeSubTotalCent * TAX + 0.5;

    // Here we calculate the total
    // can be calculated as converted cents + taxes for all the sizes
    smallFinalTotal = smallSubTotalcent + taxesForSmall;
    mediumFinalTotal = medSubTotalCent + taxesForMedim;
    largeFinalTotal = largeSubTotalCent + taxesForLarge;

    // final sum calculations
    finalSubtotalCents = smallSubTotalcent + medSubTotalCent + largeSubTotalCent;
    taxesTotal = taxesForSmall + taxesForMedim + taxesForLarge;
    finalTotalPrice = finalSubtotalCents + taxesTotal;

    // display to the user
    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, smallShirtPrice, patQty, ((double)smallSubTotalcent / 100), ((double)taxesForSmall / 100), ((double)smallFinalTotal / 100));
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, mediumShirtPrice, salQty, ((double)medSubTotalCent / 100), ((double)taxesForMedim / 100), ((double)mediumFinalTotal / 100));
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, largeShirtPrice, tomQty, ((double)largeSubTotalCent / 100), ((double)taxesForLarge / 100), ((double)largeFinalTotal / 100));

    printf("-------- ---- ----- --- --------- --------- ---------\n");

    printf("%33.4lf %9.4lf %9.4lf\n\n", ((double)finalSubtotalCents / 100), ((double)taxesTotal / 100), ((double)finalTotalPrice / 100));

    printf("\n");

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");

    printf("Sales EXCLUDING tax\n");
    printf("change     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("              %.4lf\n", (double)finalSubtotalCents / 100);

    // Calculation of change
    val = finalSubtotalCents;
    change = val / 200;
    val %= 200;
    printf("Toonies  %d    %.4lf\n", change, (double)val / 100);

    change = val / 100;
    val %= 100;
    printf("Loonies    %d    %.4lf\n", change, (double)val / 100);

    change = (int)val / 25;
    val %= 25;
    printf("Quarters   %d    %.4lf\n", change, (double)val / 100);

    change = (int)val / 10;
    val %= 10;
    printf("Dimes      %d    %.4lf\n", change, (double)val / 100);

    change = (int)val / 5;
    val %= 5;
    printf("Nickels    %d    %.4lf\n", change, (double)val / 100);

    change = (int)val / 1;
    val %= 1;
    printf("Pennies    %d    %.4lf\n\n", change, (double)val / 100);

    // calculating the average price
    averagePrice = ((((double)(finalSubtotalCents) / (patQty + salQty + tomQty)) + 0.005) * 100);

    printf("Average cost/shirt: $%.4lf\n\n", (double)averagePrice / 10000);

    // calculating all the prices including the fees

    printf("Sales INCLUDING tax\n");
    printf("change     Qty   Balance\n");
    printf("-------- --- ---------\n");

    printf("              %.4lf\n", (double)finalTotalPrice / 100);

    val = finalTotalPrice;
    change = val / 200;
    val %= 200;
    printf("Toonies  %d    %.4lf\n", change, (double)val / 100);

    change = val / 100;
    val %= 100;
    printf("Loonies    %d    %.4lf\n", change, (double)val / 100);

    change = (int)val / 25;
    val %= 25;
    printf("Quarters   %d    %.4lf\n", change, (double)val / 100);

    change = (int)val / 10;
    val %= 10;
    printf("Dimes      %d    %.4lf\n", change, (double)val / 100);

    change = (int)val / 5;
    val %= 5;
    printf("Nickels    %d    %.4lf\n", change, (double)val / 100);

    change = (int)val / 1;
    val %= 1;
    printf("Pennies    %d    %.4lf\n\n", change, (double)val / 100);

    averagePrice = ((((double)(finalTotalPrice) / (patQty + salQty + tomQty)) + 0.005) * 100);

    printf("Average cost/shirt: $%.4lf\n\n", (double)averagePrice / 10000);

    return 0;
}

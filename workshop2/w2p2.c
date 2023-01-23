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
    // variables 
    double smallShirtPrice, mediumShirtPrice, largeShirtPrice; 
    int patQty, salQty, tomQty;
    int patSubTotal, salSubTotal, tomSubTotal, patTax, salTax, tomTax, patGrandTotal, salGrandTotal, tomGrandTotal; 
    int finalTotal, finalTax, finalSubTotal; 
    double finalSubAvg = 0, finalTotalAvg =0, subShirtPatty = 0, subShirtSal = 0, subShirtTom = 0; 

    // displaying to the user
    printf("Set Shirt Prices\n"); 
    printf("================\n"); 
    printf("Enter the price for a SMALL shirt: $"); 
    scanf("%lf",&smallShirtPrice); 
    printf("Enter the price for a MEDIUM shirt: $"); 
    scanf("%lf",&mediumShirtPrice); 
    printf("Enter the price for a LARGE shirt: $"); 
    scanf("%lf",&largeShirtPrice); 
    printf("\n"); 

    printf("Shirt Store Price List\n"); 
    printf("======================\n"); 
    printf("SMALL  :$%.2lf\n",smallShirtPrice);
    printf("MEDIUM :$%.2lf\n",mediumShirtPrice); 
    printf("LARGE  :$%.2lf\n\n",largeShirtPrice); 

    // for patty 
    printf("Patty's shirt size is \'%c\'\n",patSize); 
    printf("Number of shirts Patty is buying: ");
    scanf("%d",&patQty);
    printf("\n"); 
    
    // patty's calculations 
    patSubTotal = smallShirtPrice * 100 * patQty;
    patTax = patSubTotal * TAX + 0.5;
    patGrandTotal = patSubTotal + patTax;

    // for tommy 
    printf("Tommy's shirt size is \'%c\'\n",tomSize); 
    printf("Number of shirts Tommy is buying: ");
    scanf("%d",&tomQty);
    printf("\n"); 
    
    //tommy's calculations 
    tomSubTotal = largeShirtPrice * 100 * tomQty; 
    tomTax = tomSubTotal * TAX + 0.5; 
    tomGrandTotal = tomSubTotal + tomTax; 
     
    // for sally 
    printf("Sally's shirt size is \'%c\'\n",salSize); 
    printf("Number of shirt Sally is buying: ");
    scanf("%d", &salQty); 
    printf("\n"); 

    // sally calculations 
    salSubTotal = mediumShirtPrice * 100 * salQty; 
    salTax = salSubTotal * TAX + 0.5; 
    salGrandTotal = salSubTotal + salTax; 

    // display to the user 
    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, smallShirtPrice, patQty, (patSubTotal + 0.0) / 100, (patTax + 0.0) / 100, (patGrandTotal + 0.0) / 100);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, mediumShirtPrice, salQty,(salSubTotal + 0.0) / 100, (salTax + 0.0) / 100, (salGrandTotal + 0.0) / 100);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, largeShirtPrice, tomQty, (tomSubTotal + 0.0) / 100, (tomTax + 0.0) / 100, (tomGrandTotal + 0.0) / 100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");

    // calculation of the final values
    finalSubTotal = (patSubTotal + 0.0) / 100 +  (salSubTotal + 0.0) / 100 + (tomSubTotal = 0.0) / 100;
    finalTax = patTax + salTax + tomTax;
    finalTotal = patGrandTotal+ salGrandTotal + tomGrandTotal;

    printf("                         %8.4lf  %8.4lf  %8.4lf\n", finalSubTotal / 100.0, finalTax / 100.0, finalTotal / 100.0);
    printf("\n"); 

    printf("Daily retail sales represented by coins\n"); 
    printf("=======================================\n\n");
    
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", finalSubTotal/100.0);
    printf("Toonies  %3d %9.4lf\n", finalSubTotal / 200, (finalSubTotal % 200) / 100.0);
    finalSubTotal %= 200;
    printf("Loonies  %3d %9.4lf\n", finalSubTotal / 100, (finalSubTotal % 100) / 100.0);
    finalSubTotal %= 100;
    printf("Quarters %3d %9.4lf\n", finalSubTotal / 25, (finalSubTotal % 25) / 100.0);
    finalSubTotal %= 25;
    printf("Dimes    %3d %9.4lf\n", finalSubTotal / 10, (finalSubTotal % 10) / 100.0);
    finalSubTotal %= 10;
    printf("Nickels  %3d %9.4lf\n", finalSubTotal / 5, (finalSubTotal % 5) / 100.0);
    finalSubTotal %= 5;
    printf("Pennies  %3d %9.4lf\n\n", finalSubTotal / 1, (finalSubTotal % 1) / 100.0);
    finalSubTotal %= 1;

    finalSubAvg = (patSubTotal + salSubTotal + tomSubTotal) / 100.0;
    subShirtPatty = patQty;
    subShirtSal = salQty; 
    subShirtTom = tomQty; 

    printf("Average cost/shirt: $%.4lf\n\n", finalSubAvg / (subShirtPatty + subShirtSal + subShirtTom));
    
    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", finalTotal / 100.0);
    printf("Toonies  %3d %9.4lf\n", finalTotal / 200, (finalTotal % 200) / 100.0);
    finalTotal %= 200;
    printf("Loonies  %3d %9.4lf\n", finalTotal / 100, (finalTotal % 100) / 100.0);
    finalTotal %= 100;
    printf("Quarters %3d %9.4lf\n", finalTotal / 25, (finalTotal % 25) / 100.0);
    finalTotal %= 25;
    printf("Dimes    %3d %9.4lf\n", finalTotal / 10, (finalTotal % 10) / 100.0);
    finalTotal %= 10;
    printf("Nickels  %3d %9.4lf\n", finalTotal / 5, (finalTotal % 5) / 100.0);
    finalTotal %= 5;
    printf("Pennies  %3d %9.4lf\n\n", finalTotal / 1, (finalTotal % 1) / 100.0);
    finalTotal %= 1;

    finalTotalAvg = (patGrandTotal + salGrandTotal + tomGrandTotal) / 100.0;
    printf("Average cost/shirt: $%2.4f", finalTotalAvg / (subShirtPatty + subShirtSal + subShirtTom));

return 0; 

}

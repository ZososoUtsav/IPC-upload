/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  : utsav gautam
Student ID#: 157891219
Email      : ugautam4@myseneca.ca
Section    : ZCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;

    // declaring variables

    // product id
    const int productOneId = 111, productTwoId = 222, productThreeId = 111;

    // product prices
    const double productOnePrice = 111.49, productTwoprice = 222.99, productThreePrice = 334.49;

    // product tax status
    const char productOneTax = 'Y', productTwoTax = 'N', productThreeTax = 'N';

    //  variable to store average price
    double avgPrice = (productOnePrice + productTwoprice + productThreePrice) / 3;

    // displaying to the user
    printf("Product Information\n");

    printf("===================\n");

    printf("Product-1 (ID:%d)\n", productOneId);
    printf("\tTaxed: %c\n", productOneTax);
    printf("\tPrice: $%.4lf", productOnePrice);
    printf("\n");

    printf("Product-2 (ID:%d)\n", productTwoId);
    printf("\tTaxed: %c\n", productTwoTax);
    printf("\tPrice: $%.4lf", productTwoprice);
    printf("\n");

    printf("Product-3 (ID:%d)\n", productThreeId);
    printf("\tTaxed: %c\n", productThreeTax);
    printf("\tPrice: $%.4lf", productThreePrice);
    printf("\n\n");

    // calculation and displaying of average price
    printf("The average of all prices is: $%.4lf", avgPrice);
    printf("\n\n");

    // displaying the description
    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n"
           "2. FALSE: is always represented by integer value 0\n"
           "3. TRUE : is represented by any integer value other than 0\n\n");

    printf("Some Data Analysis...\n");
    printf("=====================\n");
    printf("1. Is product 1 taxable? -> %d\n\n", productOneTax == 'Y');
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", productTwoTax == 'N' && productThreeTax == 'N');
    printf("3. Is product 3 less than testValue (%.2lf)? -> %d\n\n", testValue, productThreePrice < testValue);
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", productThreePrice > productOnePrice + productTwoprice);
    printf("5. Is the price of product 1 equal to or more than the price difference"
           "of product 3 LESS product 2? -> %d (price difference: $%.2lf)",
           productOnePrice >= productThreePrice - productTwoprice, productThreePrice - productTwoprice);
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", productTwoprice >= avgPrice);
    printf("7. Based on product ID, product 1 is unique -> %d\n\n", (productOneId != productTwoId) && (productOneId != productThreeId));
    printf("8. Based on product ID, product 2 is unique -> %d\n\n", (productTwoId != productOneId) && (productTwoId != productThreeId));
    printf("9. Based on product ID, product 3 is unique -> %d\n\n", (productThreeId != productOneId) && (productThreeId != productTwoId));

    return 0;
}
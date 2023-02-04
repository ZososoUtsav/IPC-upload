/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
Full Name  : Utsav Gautam
Student ID#: 157891219
Email      : ugautam4@myseneca.ca
Section    : ZCC
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>
// using macros for values
#define minLimit 3
#define maxLimit 20

// entry point to the program
int main(void)
{
    // declaring variables and set to safe state 0
    int numOfTimes = 0, countLimiter = 0;
    char typeOfLoopInput;

    // display the info to the stdoutput
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");
    printf("\n");

    // run this code untill numOfTimes = 0 OR typeOFLoopInput == 'Q'
    do
    {

        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &typeOfLoopInput, &numOfTimes);

        // check if the given integer for number of times is >= 30 and num of times <=maxLimit
        if (numOfTimes >= minLimit && numOfTimes <= maxLimit)
        {

            if (typeOfLoopInput == 'D' || typeOfLoopInput == 'W' || typeOfLoopInput == 'F')
            {
                // checking the type of loop and conditions to perform using switch statement
                switch (typeOfLoopInput)
                {
                case 'D':
                    printf("DO - WHILE: ");
                    countLimiter = 0; // variable to check the number of times we print the statement
                    // do-while loop
                    do
                    {
                        printf("%c", typeOfLoopInput);
                        countLimiter++; // increase  by 1 each time until condition satisfied

                    } while (countLimiter < numOfTimes);
                    printf("\n\n"); // print new line
                    break;

                case 'W':
                    printf("WHILE     : ");
                    countLimiter = 0;
                    // while loop
                    while (countLimiter < numOfTimes)
                    {
                        printf("%c", typeOfLoopInput);
                        countLimiter++;
                    }
                    printf("\n\n");
                    break;

                case 'F':
                    printf("FOR       : ");
                    // for loop
                    for (countLimiter = 0; countLimiter < numOfTimes; countLimiter++)
                    {

                        printf("%c", typeOfLoopInput);
                    }
                    printf("\n\n");
                    break;
                }
            }
            else
            {

                printf("ERROR: Invalid entered value(s)!\n\n"); // display invalid values
            }
        }
        else if (typeOfLoopInput == 'Q' && numOfTimes == 0) // if Q0 end the application
        {
            printf("\n+--------------------+\n");
            printf("Loop application ENDED\n");
            printf("+--------------------+\n");
            printf("\n");
        }

        else if (typeOfLoopInput == 'Q') // if user input only Q display error
        {
            printf("ERROR: To quit, the number of iterations should be 0!\n\n");
        }
        else if (numOfTimes == 0 && numOfTimes != 'Q') // check for another possibilty of error
        {
            printf("ERROR: Invalid entered value(s)!\n\n");
        }
        else if (numOfTimes < minLimit || numOfTimes > 10) // if less than the given number ask the
        {

            printf("ERROR: The number of iterations must be between %d-%d inclusive!\n\n", minLimit, maxLimit);
        }

    } while (numOfTimes != 0 || typeOfLoopInput != 'Q'); // if condition is satisfied exit the loop

    return 0; // return to OS the program ran succesfully without any errors
}
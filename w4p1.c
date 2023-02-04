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

int main(void)
{
    // declaration of variables
    char typeOfLoop;
    int numOfTimes, loopStatus = 1;

    // display info to stdoutput
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");
    printf("\n");
    while (loopStatus == 1)
    {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf("%c%d", &typeOfLoop, &numOfTimes);

        switch (typeOfLoop)
        {
            // for do while loop
        case 'D':
            if (numOfTimes >= 3 && numOfTimes <= 20)
            {
                printf("DO-WHILE: ");
                do
                {
                    printf("%c", typeOfLoop);
                    numOfTimes--;
                } while (numOfTimes > 0);
                printf("\n");
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            printf("\n");
            break;
        case 'W':
            if (numOfTimes >= 3 && numOfTimes <= 20)
            {
                printf("WHILE   : ");
                while (numOfTimes > 0)
                {
                    printf("%c", typeOfLoop);
                    numOfTimes--;
                }
            }
            else
                printf("\n");
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
            break;

        case 'F':
            if (numOfTimes >= 3 && numOfTimes <= 20)
            {
                printf("FOR     : ");
                int i;
                for (i = numOfTimes; i < 0; i--)
                {
                    printf("%c", typeOfLoop);
                }
                printf("\n");
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
            break;

        case 'Q':
            if (numOfTimes == 0)
            {
                printf("\n+--------------------+\n");
                printf("Loop application ENDED\n");
                printf("+--------------------+\n");
                loopStatus = 0;
            }

            else
            {
                printf("ERROR: To quit, the number of iterations should be 0!");
            }
            break;

        default:
            printf("ERROR: Invalid entered value(s)!\n\n");
            break;
        }
    }
    return 0;
}
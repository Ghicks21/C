#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int length;
int random_number;

int main()
{

    // Get the user to input the desired length
    printf("Please input desired password length: ");

    scanf("%i", &length);

    // Run this loop for the length of the password to generate code.
    srand(time(0));
    for (int i = 0; i < length; i++)
    {
        // Generate a random number between 65 and 90.
        random_number = 65 + rand() % (90 - 65 + 1);

        // Convert the number to ASCII value and print value to terminal.
        printf("%c", (char)random_number);
    }
    printf("\n");
    return 0;
}

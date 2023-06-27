#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    /* Character set to select the password characters from */
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int n = sizeof(charset) - 1;

    srand(time(0)); /* Seed the random number generator */

    printf("Generated password: ");

    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        /* Pick a random character from the charset and print it */
        printf("%c", charset[rand() % n]);
    }

    printf("\n");
    return 0;
}

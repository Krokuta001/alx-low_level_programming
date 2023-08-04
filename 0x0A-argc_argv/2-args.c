#include <stdio.h>

/**
 * main - Entry point of the program. Prints all arguments it receives.
 *        All arguments should be printed, including the first one (program name).
 *
 * @argc: The argument count (number of command-line arguments).
 * @argv: An array of pointers to strings, containing the command-line arguments.
 *
 * Return: Always 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
    int count;

    for (count = 0; count < argc; count++)
    {
        printf("Argument %d: %s\n", count, argv[count]);
    }

    return 0;
}


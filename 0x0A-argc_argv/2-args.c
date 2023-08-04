#include <stdio.h>

/**
 * main - Entry point of the program.
 *        Prints all arguments it receives, including the first one.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to strings containing the arguments.
 *
 * Return: Always 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0

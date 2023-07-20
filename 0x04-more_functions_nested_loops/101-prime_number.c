#include "main.h"

/* Function to print a single character using _putchar */
void _putchar(char c);

/* Function to recursively print an integer */
void print_number(int n);

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0)
        print_number(n / 10);

    _putchar('0' + (n % 10));
}


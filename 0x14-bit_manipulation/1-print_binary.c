/*
 * File: 1-print_binary.c
 * Auth: krokuta
 */

#include "main.h"

/**
 * display_binary - Displays the binary representation of a given number.
 * @number: The number to be shown in binary form.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

#include "holberton.h"

/**
 * print_numbers - print the numbers from 0 to 9
 *
 * Return: Always n++
 */
void print_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}

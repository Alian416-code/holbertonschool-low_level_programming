#include "holberton.h"
/**
 * print_most_numbers - print numbers without 2 and 4 numbers
 *
 * Return: No value
 */
void print_most_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');
}

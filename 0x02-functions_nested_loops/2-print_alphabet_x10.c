#include "holberton.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}

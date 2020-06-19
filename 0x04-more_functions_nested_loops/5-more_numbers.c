#include "holberton.h"
/**
 * more_numbers - print 10 times the number 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int n, m;

	m = 0;
	while (m < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		m++;
		_putchar('\n');
	}
}

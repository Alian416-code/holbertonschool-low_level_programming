#include "holberton.h"
/**
 * _isalpha - letter uppercase o lowercase
 * @c: alpha character
 * Return: 1 if c is an alpha character, 0 if is not
 */
int _isalpha(int c)
{
	while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

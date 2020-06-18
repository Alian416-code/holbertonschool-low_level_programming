#include "holberton.h"
/**
 * _islower - returns 1 if c is lowercase
 * @c: character
 * Return: Always 0.
 */
int _islower(int c)
{
	while (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

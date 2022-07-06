#include "main.h"

/**
 * _islower - function that checks for a lowercase alphabet
 *
 * Return: returns 0 and 1 depending on the condition
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"
#include <string.h>

/**
 * _strncpy - for copying purpose
 * @dest: paremeter one
 * @src: parameter two
 * @n: parameter three
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

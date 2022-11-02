#include <stdio.h>
#include "main.h"

/**
* _strcat - cancatenates two strings
* @dest: destination string
* @src: source string
*
* Return: a pointer to the resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}

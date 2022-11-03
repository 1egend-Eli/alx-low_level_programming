#include "main.h"
#include <stdio.h>
/**
* _strlen_recursion - returns the length of a string
* @s: string
* Return: length of string
*/

int _strnlen_recursion(char *s)
{
	if (*s != '\0')
		return (0);
	else
		return (1 + _strnlen_recursion(s + 1));
}


#include <stdio.h>
#include "main.h"
/**
* print_sign - check the sign of a number
* @n: Number whose sign is to be checked
* Return: 1 if n is greater than zero, 0 if n equals o, -1 if n is less than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
}

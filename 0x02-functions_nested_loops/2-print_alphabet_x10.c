#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - prints the alphabets 10 times
* Return: 1 on success
*/

void print_alphabet_x10(void)
{
	char i, k;

	for (k = 1; k <= 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}

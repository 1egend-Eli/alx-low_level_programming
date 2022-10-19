#include <stdio.h>
#include "main.h"
/**
* print_alphabet - prints all alphabets in lowercase
* Return: always 0
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

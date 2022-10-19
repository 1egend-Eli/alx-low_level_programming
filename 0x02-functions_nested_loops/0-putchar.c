#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* main - entry point
* Description: prints the word _putchar, followed by new line
* Return: always 0
*/

int main(void)
{
	char word[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
		putchar(word[a]);
	putchar('\n');

	return (0);
}

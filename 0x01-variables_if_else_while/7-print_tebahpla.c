#include <stdio.h>
/**
* main - starting point of program
* Return: 0 if no error, non zero if error
*/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

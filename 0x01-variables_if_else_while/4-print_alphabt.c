#include <stdio.h>
/**
* main - starting point for program
* Return: 0 if no errors, non zero if errors
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>
#include "main.h"
/**
* jack_bauer - prints all minutes in a day from 00:00
*
* Return:0 if successful
*/

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a == 2 && b > 3)
					{
						break;
					}
					putchar(a + '0');
					putchar(b + '0');
					putchar(':');
					putchar(c + '0');
					putchar(d + '0');
					putchar('\n');
				}
			}
		}
	}
}

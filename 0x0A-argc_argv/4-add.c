#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 on success, non zero if error
*/

int main(int argc, char *argv[])
{
	 int result = 0, num, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%i\n", result);

	return (0);
}

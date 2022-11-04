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
	int i, j;
	int mut;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mut = i * j;
		printf("%i\n", mut);

		return (0);
	}
	else
		printf("Error\n");

		return (1);
}


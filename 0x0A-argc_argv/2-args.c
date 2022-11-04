#include <stdio.h>
#include "main.h"
/**
* main - prints all arguments it receives
* @argc: argument count
* @argv: argument vector
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
/*
*	if (argc > 0)
*	{
*		while (i < argc)
*		{
*		printf("%s\n", argv[i]);
*		i++;
*		}
*	}
*/
	return (0);
}

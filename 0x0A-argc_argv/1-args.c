#include <stdio.h>
#include "main.h"
/**
* main - prints the number of arguments passed
* @argc: argument count
* @argv: atgument vector
* Return: always 0
*/

int main(int argc, char *argv[])
{
	(void) *argv[0];
	printf("%i\n", argc - 1);

	return (0);
}


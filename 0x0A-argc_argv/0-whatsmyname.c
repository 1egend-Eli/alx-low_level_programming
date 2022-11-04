#include <stdio.h>
#include "main.h"
/**
* main - print the name of the progeam
* @argv: argument vector
* @argc: argument count
* Return: always 0
*/

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}

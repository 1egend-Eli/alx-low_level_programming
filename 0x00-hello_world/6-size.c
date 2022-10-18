#include <stdio.h>
/**
* main - program entry point.
*
* Return: 0 if no error, non zero if error
*/

int main(void)
{
	printf("Size of an int: %Ild byte(s)\n", sizeof(char));
	printf("Size of an int: %Ild byte(s)\n", sizeof(int));
	printf("Size of a long int: %Ild byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %Ild byte(s)\n", sizeof(long long int));
	printf("Size of a float: %Ild byte(s)\n", sizeof(float));
	return (0);
}

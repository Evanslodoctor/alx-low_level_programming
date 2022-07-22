#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: number of commandline arguments
 * @argv: list of commandline arguments
 *
 * Return: 0 Always(success)
 */
int main(int argc, char *argv[])
{
	int mul = 0;
	int i = 1;

	if (argc == 3)
	{
		mul = (atoi(argv[i]) * atoi(argv[i + 1]));
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
return (1);
}

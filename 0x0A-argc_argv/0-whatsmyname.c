#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of commandline arguments
 * @argv: list of commandline arguments
 *
 * Return: 0 Always (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}

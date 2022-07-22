#include <stdio.h>

/**
 * main - prints number of arguments followed by a new line
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 *
 * Return: 0 Always (success)
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", (argc - 1));

return (0);
}

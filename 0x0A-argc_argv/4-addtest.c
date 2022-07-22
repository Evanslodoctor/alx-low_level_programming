#include <stdio.h>
#include <stdlib.h>
/**
 * main: prints sum of arguments
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, prints Error,
 *  followed by a new line, and return 1
 *  numbers and the addition of all the numbers stored in an int
 *
 *  Return : Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	i = 0;
	sum = 0;

	if (argc > 1)
	{
		for(i = 1; i < argc; i++)
		{	
			sum += atoi(argv[i]);
		}
	if (argc == 1)
	{
		printf("%d", 0);
	}

	if ((atoi(argv[i])) !== int)
			{
			printf("Error");
			}
	else{
		printf("%d\n", sum);
	}
	}
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers.
 * @argc: argument counter
 * @argv: argument values
 * Return: 1 if Error and 0 if success
 */

int main(int argc, char **argv)
{
	int num, result = 0, i;

	while (argc-- > 1)
	{
		for (i = O; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: counts that there are 3 arguments
 * @argv: indexes the arguments to be multiplied
 * Return: 0 for success
 * If two arguments are not entered, print error and return 1
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result =  a * b;
	printf("%d\n", result);
	return (0);
}


#include <stdio.h>
/**
 * main -prints all arguments
 * @argc: counts arguments
 * @argv: indexes arguments
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>
/**
 * main - prints the file name
 * @argc: counts arguments
 * @argv: indexes arguments and pulls filename
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

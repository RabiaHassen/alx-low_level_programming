#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: counts arguments
 * @argv: indexes arguments
 * Return: 0 for success
 * If the arguments passed is not 1, print Error and return 1
 */
int main(int argc, char *argv[])
{
	int amount, change = 0, j;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return(1);
	}

	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && amount >= 0; j++)
	{
		while (amount >= coins[j])
		{
			amount -= coins[j];
			change++;
		}
	}
	printf("%d\n", change);
	return(0);
}

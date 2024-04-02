#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the minimum number of coins to make change
* for an amount of money
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 1 if there is an error; else returns 0
*/

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if ((cents / 25) > 0)
	{
		coins += (cents / 25);
		cents -= (25 * (cents / 25));
	}
	if ((cents / 10) > 0)
	{
		coins += (cents / 10);
		cents -= (10 * (cents / 10));
	}
	if ((cents / 5) > 0)
	{
		coins += (cents / 5);
		cents -= (5 * (cents / 5));
	}
	if ((cents / 2) > 0)
	{
		coins += (cents / 2);
		cents -= (2 * (cents / 2));
	}
	if (cents > 0)
		coins += cents;
	printf("%d\n", coins);
	return (0);
}


#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is %i and is ", n, (n % 10));

	if ((n % 10) == 0)
	{
		printf("0\r\n");
	}
	else if ((n % 10) > 5)
	{
		printf("greater than 5\r\n");
	}
	else
	{
		printf("less than 6 and not 0\r\n");
	}

	return (0);
}

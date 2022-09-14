#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - check the code
 *
 *Return: always 0
 */

int main(void)
{
	long long int current = 2;
	long long int previous = 1;
	int i;

	printf("%lli", previous);
	printf(", ");
	printf("%lli", current);
	printf(", ");
	for (i = 0; i < 48; i++)
	{
		long long int nextFibo = current + previous;

		printf("%lli", nextFibo);
		if (i != 47)
		{
			printf(", ");
		}
		previous = current;
		current = nextFibo;
	}
	printf("\n");
}

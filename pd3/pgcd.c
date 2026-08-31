#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int gcd(int first, int second)
{
	int divisor;

	if (first > second)
		divisor = second;
	else
		divisor = first;
	while(divisor)
	{
		if (first % divisor == 0 && second % divisor == 0)
			return (divisor);
		else 
			divisor--;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int first;
	int second;
	int divisor;

	if (argc == 3)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);

		if (first > 0 && second > 0)
		{
			divisor = gcd(first, second);
			if (divisor > 0)
				printf("%d", divisor); 
		}
	}
	printf("\n");
	return(0);
}
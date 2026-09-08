#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	int factor;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		factor = 2;
		if (n == 1)
			printf("1");
		while (n != 1)
		{
			if (n % factor == 0)
			{
				printf("%d", factor);
				n /= factor;
				if (n != 1)
					printf("*");
			}
			else 
				factor++;
		} 
	}
	printf("\n");
	return (0);
}

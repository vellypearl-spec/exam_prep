#include <unistd.h>

int main(int agrc, char **argv)
{
	int i;
	int j;
	int k;
	int duplicates;

	i = 0;
	j = 0;
	if (agrc == 3)
	{
		while(argv[1][i])
		{
			k = 0;
			duplicates = 0;
			while (k < i)
			{
				if (argv[1][i] == argv[1][k])
					duplicates++;
				k++;
			}
			if (duplicates == 0)
				write(1, &argv[1][i], 1);
			i++;
		}
		while (argv[2][j])
		{
			i = 0;
			k = 0;
			duplicates = 0;
			while (k < j)
			{
				if (argv[2][j] == argv[2][k])
					duplicates++;
				k++;
			}
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][j])
					duplicates++;
				i++;
			}
			if (duplicates == 0)
				write(1, &argv[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
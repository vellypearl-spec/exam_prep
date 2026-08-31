#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int dupl;

	i = 0;
	j = 0;

	if(argc == 3)
	{
		while (argv[1][i])
		{
			dupl = 0;
			k = 0;
			while (k < i)
			{
				if (argv[1][i] == argv[1][k])
					dupl++;
				k++;
			}
			if (dupl == 0)
				write(1, &argv[1][i], 1);
			i++;	
		}
		while (argv[2][j])
		{
			dupl = 0;
			k = 0;
			i = 0;
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][j])
					dupl++;
				i++; 
			}
			while (k < j)
			{
				if (argv[2][j] == argv[2][k])
					dupl++;
				k++;
			}
			if (dupl == 0)
				write(1, &argv[2][j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
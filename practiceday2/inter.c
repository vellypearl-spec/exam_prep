#include <unistd.h>

int main(int agrc, char **argv)
{
	int i;
	int j;
	int k;
	int duplicates;

	i = 0;
	
	if (agrc == 3)
	{
		while(argv[1][i])
		{
			j = 0;
			k = 0;
			duplicates = 0;
			while (k < i)
			{
				if (argv[1][i] == argv[1][k])
					duplicates++;
				k++;
				
			}
			if (duplicates == 0)
				{
					while (argv[2][j])
					{
						if (argv[1][i] == argv[2][j])
						{
							write(1, &argv[1][i], 1);
							break;
						}	

						j++;
					}
				}
				i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int dupl;
	int same_char;

	i = 0;
	j = 0;
	if (argc == 3 && argv[1][i] != '\0' && argv[2][j] != '\0')
	{
		while(argv[1][i])
		{
			dupl = 0;
			k = 0;
			j = 0;
			same_char = 0;
			while (k < i)
			{
				if (argv[1][i] == argv[1][k])
					dupl++;
				k++;
			}
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{		
					same_char++;
				}
				j++;
			}
			if (dupl == 0 && same_char > 0)
				write(1, &argv[1][i], 1);
			i++;	
		}
	}
	write(1, "\n", 1);
	return (0);
}
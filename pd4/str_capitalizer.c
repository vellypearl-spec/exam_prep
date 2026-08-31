#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	if (argc >= 2)
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
				{
					if (i == 0 ||argv[j][i - 1] == ' ' 
						|| argv[j][i - 1] == '\t' )
						argv[j][i] = argv[j][i] - 32;
				}
				else if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
				{
					if ( i != 0 && argv[j][i - 1] != ' ' 
						&& argv[j][i - 1] != '\t')
						argv[j][i] = argv[j][i] + 32;
				}
				write (1, &argv[j][i], 1);
				//if (argv[j][i + 1] == ' ' || argv[j][i + 1] == '\t')
				//	write(1, " ", 1);
				i++;
			} 
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}
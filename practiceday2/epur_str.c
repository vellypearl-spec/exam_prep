#include <unistd.h>

int main(int agrc, char **argv)
{
	int i;
	int tmp;

	i = 0;
	if (agrc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			else 
			{
				write(1, &argv[1][i],1);
				if (argv[1][i+1] == ' ' || argv[1][i+1] == '\t')
				{
					tmp = i + 1;
					while (argv[1][tmp])
					{
						if (argv[1][tmp] != ' ' && argv[1][tmp] != '\t')
						{
							write(1, " ", 1);
							break;
						}
						tmp++;
					}
				}
				i++;
			}
				
		}
	}
	write(1, "\n", 1);
	return (0);
}
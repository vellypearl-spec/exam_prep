#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int temp;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write (1, &argv[1][i], 1);
				if (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t')
				{
					temp = i + 1;
					while (argv[1][temp])
					{
						if (argv[1][temp] != ' ' && argv[1][temp] != '\t')
							{
								write (1, "   ", 3);
								break;
							}
						temp++;
					}
				}
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}	
#include <unistd.h>

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while(str[count])
		count++;
	return(count);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int match;
	int len;

	i = 0;
	j = 0;
	len = 0;
	match = 0;
	if (argc == 3)
	{
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				match++;
				i++;
				j++;
			}
			else
				j++;
		}
		len = ft_strlen(argv[1]);
		i = 0;
		if (len == match)
		{
			
			while (argv[1][i])
			{
				write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
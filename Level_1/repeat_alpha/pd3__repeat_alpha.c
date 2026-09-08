#include <unistd.h>

int	main(int argc, char **agrv)
{
	int i;
	int position;

	i = 0;
	if (argc == 2)
	{
		while(agrv[1][i])
		{
			position = 0;
			if (agrv[1][i] >= 'a' && agrv[1][i] <= 'z')
				position = agrv[1][i] - 'a' + 1;
			else if (agrv[1][i] >= 'A' && agrv[1][i] <= 'Z')
				position = agrv[1][i] - 'A' + 1;
			if (position > 0)
			{
				while(position)
				{
					write(1, &agrv[1][i], 1);
					position--;
				}
			}
			else 
				write(1, &agrv[1][i], 1); 
			i++;
		}
	}
	write(1, "\n", 1);
	return (0); 
}
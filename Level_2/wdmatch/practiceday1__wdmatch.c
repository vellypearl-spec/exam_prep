#include <unistd.h>

void print(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}	
}
int main(int agrc, char **agrv)
{
	int i;
	int x;

	i = 0;
	x = 0;
	if (agrc == 3)
	{
		while(agrv[2][x])
		{
			
			if (agrv[1][i] == agrv[2][x])
			{
				i++;
				x++;
			}
			else
				x++;
		}
		if (!agrv[1][i])
				print(agrv[1]);
	}
	write(1, "\n", 1);
	return(0);
}
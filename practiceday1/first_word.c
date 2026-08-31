#include <unistd.h>

int main(int agrc, char **agrv)
{
	int i;

	i = 0;

	if (agrc == 2)
	{
		while(agrv[1][i] == ' ' || agrv[1][i] == '\t')
			i++;
		while(agrv[1][i] && agrv[1][i] != '\t' && agrv[1][i] != ' ')
		{
			write(1, &agrv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
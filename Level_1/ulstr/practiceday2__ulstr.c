#include <unistd.h>

int main(int agrc, char **agrv)
{
	int i;

	i = 0;
	if (agrc == 2)
	{
		while (agrv[1][i])
		{
			if (agrv[1][i] >= 'a' && agrv[1][i] <= 'z')
				agrv[1][i] = agrv[1][i] - 32;
			else if (agrv[1][i] >= 'A' && agrv[1][i] <= 'Z')
				agrv[1][i] = agrv[1][i] + 32;
			write(1, &agrv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
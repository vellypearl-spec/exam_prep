#include <unistd.h>

int main(int agrc, char **agrv)
{
	int i;

	i = 0;
	if (agrc == 4 && agrv[2][0] != '\0' && agrv[3][0] != '\0'
		&& agrv[2][1] == '\0' && agrv[3][1] == '\0')
	{
		while (agrv[1][i])
		{
			if (agrv[1][i] == agrv[2][0])
				agrv[1][i] = agrv[3][0];
			write(1, &agrv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

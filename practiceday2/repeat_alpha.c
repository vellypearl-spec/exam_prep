#include <unistd.h>

int main(int agrc,char **agrv)
{
	int i;
	int repetition;
	int count;

	i = 0;
	if (agrc == 2)
	{
		while (agrv[1][i])
		{
			count = 0;
			if (agrv[1][i] >= 'a' && agrv[1][i] <= 'z')
				repetition = agrv[1][i] - 'a' + 1;
			else if (agrv[1][i] >= 'A' && agrv[1][i] <= 'Z')
				repetition = agrv[1][i] - 'A' + 1;
			else
				repetition = 1;
			while (count < repetition)
			{
				write(1, &agrv[1][i], 1);
				count++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
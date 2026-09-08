#include <unistd.h>

int find_start(char *str, int index)
{
	int start;

	while (index >= 0 && str[index] != ' ' && str[index] != '\t')
		index--;
	start = index + 1;
	return(start);
}

int find_end(char *str, int index)
{
	int end;

	while (index >= 0 && (str[index] == ' ' || str[index] == '\t'))
		index--;	
	end = index;
	return(end);
}

int main(int argc, char **argv)
{
	int i;
	int start;
	int end;
	int word;

	i = 0;
	word = 1;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			end = find_end(argv[1], i);
			if (end < 0)
				break;
			start = find_start(argv[1], end);
			i = start - 1;
			if (word == 0)
    			write(1, " ", 1);
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			word = 0;
		}
	}
	write(1, "\n", 1);
	return (0);
}
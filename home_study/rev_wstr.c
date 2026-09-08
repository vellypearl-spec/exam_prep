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
int ft_counter(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
    		i++;
		if (i >= 0 && str[i] != ' ' && str[i] != '\t')
    		count++;
		i++;
	}
	return (count);
}

int main(int argc, char **argv)
{
	int i;
	int start;
	int end;
	int word_count;

	i = 0;
	word_count = ft_counter(argv[1]);
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (word_count)
		{
			end = find_end(argv[1], i);
			start = find_start(argv[1], i);
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
    			i--;
			if (i >= 0)
    			write(1, " ", 1);
			word_count--;
		}
	}
	write (1, "\n", 1);
	return (0);
}
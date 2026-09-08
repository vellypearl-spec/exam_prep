#include <unistd.h>

int main(int argc, char **argv)
{
	int start;
	int end;
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		{
			i--;
			if (i < 0)
				break;
			
		}	
		end = i;
		while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
			
		start = i+1;
		while (start <= end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
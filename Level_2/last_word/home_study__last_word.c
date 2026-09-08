#include <unistd.h>

int main(int argc, char **argv)
{
	int last;
	int	end;

	last = 0;
	if (argc == 2)
	{
		while (argv[1][last])
			last++;
		last--;
		while (last >= 0 
			&& argv[1][last] != ' ' && argv[1][last] != '\t')
			last--;
		end = last;
		while (last >= 0 
			&& argv[1][last] != ' ' && argv[1][last] != '\t')
			last--;
		last++;
		while (last <= end)
		{
			write(1, &argv[1][last], 1);
			last++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}
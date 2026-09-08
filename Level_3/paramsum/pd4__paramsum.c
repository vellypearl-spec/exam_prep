#include <unistd.h>

void	print_number(int n)
{
	char c;

	if (n >= 10)
		print_number(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int n;

	(void)argv;

	n = argc - 1;
	print_number(n);
	write(1, "\n", 1);
	return (0);
}
#include <unistd.h>

void print_number(int i)
{
	char c;

	if (i >= 10)
		print_number(i/10);
	c = (i % 10) + '0';
	write(1, &c, 1);
}
int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			print_number(i);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
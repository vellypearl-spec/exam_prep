#include <unistd.h>

int ft_converter(char *str)
{
	int i;
	int sign;
	int conversion;

	i = 0;
	conversion = 0;
	sign = 1;
	if (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		conversion = (conversion * 10) + (str[i] - '0');
		i++;
	}
	return (sign * conversion);
}
void	print_hex(int n)
{
	char	*base;
	char hex;

	base = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	hex = base[n % 16];
	write(1, &hex, 1);
}

int main(int agrc, char **argv)
{
	int n;

	if (agrc == 2)
	{
		n = ft_converter(argv[1]);
		print_hex(n);
	}
	write(1, "\n", 1);
	return (0);
}
#include <unistd.h>

int digit_maker(const char *str, int index)
{
	int digit;

	if (str[index] >= '0' && str[index] <= '9')
		digit = str[index] - '0';
	else if (str[index] >= 'a' && str[index] <= 'f')
		digit = str[index] - 'a' + 10;
	else if (str[index] >= 'A' && str[index] <= 'F')
		digit = str[index] - 'A' + 10;
	else 
		return (-1);
	return (digit);
}

int ft_atoi_base(const char *str, int str_base)
{
	int n;
	int digit; 
	int sign;
	int i;

	n = 0;
	i = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (str_base < 2 || str_base > 16)
    	return (0);
	while (str[i])
	{
		digit = digit_maker(str, i);
		if (digit == -1 || digit >= str_base)
			break;
		n =  n * str_base + digit;
		i++;
	}
	return (n * sign);
}
#include <stdlib.h>

int size_count(int nbr)
{
	long n;
	int size;

	n = nbr;
	size = 0;
	if (n == 0)
		size = 1;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n >= 1)
	{
		size++;
		n /= 10;
	}
	return(size);
}
char	*ft_itoa(int nbr)
{
	char *str;
	int size;
	long n;

	size = size_count(nbr);
	str = malloc(size + 1);
	n = nbr;
	if (!str)
		return(NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}	
	str[size] = '\0';
	size--;
	if (n == 0)
		str[size] = '0';
	while (n > 0)
	{
		str[size] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	return (str);
}

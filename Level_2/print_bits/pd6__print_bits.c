#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned int mask;

	mask = 128;
	while (mask)
	{
		if (mask&octet)
		{
			write (1, "1", 1);
		}
		else
			write (1, "0", 1);
		mask = mask / 2;
	}
}

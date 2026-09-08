unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned int result;

	i = 0;
	result = 0;
	while (i < 8)
	{
		result <<= 1;
		if (octet & 1)
			result |= 1;
		octet >>= 1;
		i++;
	}
	return (result);
}
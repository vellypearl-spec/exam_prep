unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int candidate;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		candidate = a;
	else	
		candidate = b;
	while (candidate % a != 0 || candidate % b != 0)
	{
		candidate++;
	}
	return(candidate);
}
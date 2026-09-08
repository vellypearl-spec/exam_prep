#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i;
	int *range;

	if (end > start)
		range = (int *)malloc(sizeof(int)*((end - start) + 1));
	else
		range = (int *)malloc(sizeof(int)*((start - end) + 1));
	i = 0;
	range[i] = end;
	i++;
	while (start != end)
	{	
		if (end < start)
		{
			range[i] = end + 1;
			end++;
			i++;
		}
		if (start < end)
		{
			range[i] = end - 1;
			end--;
			i++;
		}
	}
	return(range);
}
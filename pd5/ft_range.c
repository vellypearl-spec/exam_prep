#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i;
	int *range;

	if (start > end)
		range = (int *)malloc(sizeof(int)*((start-end) + 1));
	else
		range = (int *)malloc(sizeof(int)*((end - start) + 1));
	i = 0;
	range[i] = start;
	i++;
	while (start != end)
	{	
		if (start < end)
		{
			range[i] = start + 1;
			start++;
			i++;
		}
		if (start > end)
		{
			range[i] = start - 1;
			start--;
			i++;
		}
	}
	return(range);
}
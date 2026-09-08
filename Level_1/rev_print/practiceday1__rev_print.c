#include <unistd.h>

int main(int agrc, char **agrv)
{
	int right;

	right = 0;
	if (agrc == 2)
	{
		while(agrv[1][right])
			right++;
		right--;
		while (right >= 0)
		{
			write(1, &agrv[1][right], 1);
			right--;
		}
	}
	write(1, "\n", 1);
	return(0);
}

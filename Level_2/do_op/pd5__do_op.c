#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a;
	int b;
	int op;

	op = 0;
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if (argv[2][0] == '+')
			op = a + b;
		else if (argv[2][0] == '-')
			op = a - b;
		else if (argv[2][0] == '*')
			op = a * b;
		else if (argv[2][0] == '/')
			op = a / b;
		else if (argv[2][0] == '%')
			op = a % b;
		printf("%d\n", op);
	}
	else 
		write(1, "\n", 1);
	return (0);
}
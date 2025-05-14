#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int pgdc(unsigned int a, unsigned int b)
{
	unsigned int temp = 0;
	while(b != 0)
	{
		temp = b;
		b = a% b;
		a = temp;
	}
	return a;
}


int	main(int ac, char **av)
{
	if(ac == 3)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);

		if(a > 0  && b > 0)
			printf("%d\n", pgdc(a, b));
	}
	else
		printf("\n");
	return 0;
}


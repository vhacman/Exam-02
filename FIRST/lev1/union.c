#include <unistd.h>

void	print_unique(char *s, char *seen)
{
	int i = 0;
	while(s[i])
	{
		if(!seen[(unsigned char)s[i]])
		{
			seen[(unsigned char)s[i]] = 1;
			write(1, &s[i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	char seen[256] = {0};

	if(ac == 3)
	{
		print_unique(av[1], seen);
		print_unique(av[2], seen);
	}
	write(1, "\n", 1);
	return 0;
}
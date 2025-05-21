#include <unistd.h>

void	ft_union(char *str, char *seen)
{
	int i = 0;

	while(str[i])
	{
		if(!seen[(unsigned char)str[i]])
		{
			write(1, &str[i], 1);
			seen[(unsigned char) str[i]] = 1;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	char seen[256] = {0};
	if(ac == 3)
	{
		ft_union(av[1], seen);
		ft_union(av[2], seen);
	}
	write(1, "\n", 1);
	return 0;
}


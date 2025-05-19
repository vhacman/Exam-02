#include <unistd.h>

void	ft_union(char *s1, char *seen)
{
	int i = 0;

	while(s1[i])
	{
		if(!seen[(unsigned char) s1[i]])
		{
			write(1, &s1[i], 1);
			seen[(unsigned char) s1[i]] = 1;
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

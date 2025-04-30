#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printed(char *str, char c, int pos)
{
	int i = 0;

	while(i < pos)
	{
		if(str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

void	print_second(char *s1, char *s2)
{
	int j = 0;
	int i;

	while(s2[j])
	{
		i = 0;
		while(s1[i])
		{
			if(s2[j] == s1[i])
				break;
			i++;
		}
		if(!s1[i] && !is_printed(s2, s2[j], j))
			ft_putchar(s2[j]);
		j++;
	}
}

void	ft_union(char *s1, char *s2)
{
	int i = 0;

	while(s1[i])
	{
		if(!is_printed(s1, s1[i], i))
			ft_putchar(s1[i]);
		i++;
	}
	print_second(s1, s2);
}

int	main(int ac, char **av)
{
	if(ac == 3)
		ft_union(av[1], av[2]);
	ft_putchar('\n');
	return(0);
}	
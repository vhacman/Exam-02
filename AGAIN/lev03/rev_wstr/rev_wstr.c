#include <unistd.h>

int is_delimiter(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

int	rskip_word(char *str, int i)
{
	while (i >= 0 && !is_delimiter(str[i]))
		i--;
	return i;
}

void	rev_wstr(char *str)
{
	int i = ft_strlen(str) - 1;
	int start;
	int first = 0;

	while (i >= 0)
	{
		start = rskip_word(str, i);
		if(first)
			write(1, " ", 1);
		write(1, &str[start + 1], i - start);
		first = 1;
		i = start - 1;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}

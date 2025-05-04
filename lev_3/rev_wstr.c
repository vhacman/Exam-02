#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int skip_word(char *str, int i)
{
    while(str[i] && !is_delimiter(str[i]))
        i++;
    return i;
}

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_delimiter(char c)
{
	return(c == ' ' || c == '\t');
}

void	rev_wstr(char *str)
{
	int i;
	int start;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		i = skip_word(str, i);
		start = i + 1;
		while(str[start] && !is_delimiter(str[start]))
			write(1, &str[start++], 1);
		if (i > 0)
			write(1, " ", 1);
		i--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	ft_putchar('\n');
	return (0);
}


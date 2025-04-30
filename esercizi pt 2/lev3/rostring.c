#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int skip_space(char *str, int i)
{
	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	return(i);
}

int	is_delimiter(char c)
{
	return(c == ' ' || c == '\t' || c == '\n');
}

int	skip_first_word(char *str, int i, int *end)
{
	while (str[i] && !is_delimiter(str[i]))
		i++;
	*end = i;
	return (skip_space(str, i));
}
int	print_words(char *str, int i)
{
	int first = 1;
	int printed = 0;

	while (str[i])
	{
		if (!is_delimiter(str[i]))
		{
			if (!first)
				ft_putchar(' ');
			first = 0;
			printed = 1;
			while (str[i] && !is_delimiter(str[i]))
				ft_putchar(str[i++]);
		}
		else
			i++;
	}
	return(printed);
}

void	rostring(char *str)
{
	int i = 0;
	int start = 0;
	int end = 0;

	i = skip_space(str, i);
	start = i;
	i = skip_first_word(str, i, &end);
	int printed = print_words(str, i);
	if(printed)
		ft_putchar(' ');
	while(start < end)
		ft_putchar(str[start++]);
}

int	main(int ac, char **av)
{
	if(ac >= 2)
		rostring(av[1]);
	ft_putchar('\n');
	return(0);
}

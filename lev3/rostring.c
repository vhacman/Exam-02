#include <unistd.h>

int	is_delimiter(char c)
{
	return(c == ' ' || c == '\t' || c == '\n');
}

int skip_space(char *str, int i)
{
	while(str[i] && is_delimiter(str[i]))
		i++;
	return(i);
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
				write(1, " ", 1);
			first = 0;
			printed = 1;
			while (str[i] && !is_delimiter(str[i]))
				write(1, &str[i++], 1);
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
		write(1, " ", 1);
	while(start < end)
		write(1, &str[start++], 1);
}

int	main(int ac, char **av)
{
	if(ac >= 2)
		rostring(av[1]);
	write(1, "\n", 1);
	return(0);
}

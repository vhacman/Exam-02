#include <unistd.h>

int	is_delimiter(char c)
{
	return(c == ' ' || c == '\n' || c == '\t');
}

int	skip_space(char *str, int i)
{
	while(str[i] && is_delimiter(str[i]))
		i++;
	return i;
}

int	print_rest(char *str, int i)
{
	while(str[i] && !is_delimiter(str[i]))
		write(1, &str[i++], 1);
	return i;
}

void	rostring(char *str)
{
	int i = 0;
	int first = 0;

	i = skip_space(str, i);
	int start = i;
	while(str[i] && !is_delimiter(str[i]))
		i++;
	int end = i;
	while(str[i])
	{
		i = skip_space(str, i);
		if(first)
			write(1, " ", 1);
		i = print_rest(str, i);
		i = skip_space(str, i);
		first = 1;
	}
	if(first)
		write(1, " ", 1);
	write(1, str + start, end - start);
}

int	main(int ac, char **av)
{
	if(ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
	return 0;
}

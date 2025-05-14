#include <unistd.h>

int	is_delimiter(char c)
{
	return(c == ' ' || c == '\n' || c == '\t');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	skip_space(char *str, int i)
{
	while(str[i] && is_delimiter(str[i]))
		i++;
	return i;
}

void	rostring(char *str)
{
	int i = 0;
	int start;
	int end;
	int first = 0;

	i = skip_space(str, i);
	start = i;
	while(str[i] && !is_delimiter(str[i]))
		i++;
	end = i;
	
	i = skip_space(str, i);
	while(str[i])
	{
		if(!is_delimiter(str[i]))
		{
			if(first)
				ft_putchar(' ');
			while(str[i] && !is_delimiter(str[i]))
				write(1, &str[i++], 1);
			first = 1;
		}
		else
			i++;
	}
	if (first)
		ft_putchar(' ');
	write(1, str + start, end - start);
}

int	main(int ac, char **av)
{
	if(ac > 1)
		rostring(av[1]);
	ft_putchar('\n');
	return 0;
}


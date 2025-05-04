#include <unistd.h>

int is_delimiter(char c)
{
	return(c == ' ' || c == '\n' || c == '\t');
}

int skip_space(char *str, int i)
{
	while(str[i] && is_delimiter(str[i]))
		i++;
	return i;
}

int print(char *str, int i)
{
	while(str[i] && !is_delimiter(str[i]))
		write(1, &str[i++], 1);
	return i;
}

void    expand_str(char *str)
{
	int i = 0;
	int first = 0;

	i = skip_space(str, i);
	while(str[i])
	{
		if(first)
			write(1, "   ", 3);
		i = print(str, i);
		first = 1;
		i = skip_space(str, i);
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		expand_str(av[1]);
	write(1, "\n", 1);
	return 0;
}
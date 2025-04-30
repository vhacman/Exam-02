#include <unistd.h>

int ft_wordlen(char *str)
{
	int i = 0;
	while(str[i] && str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
		i++;
	return(i);
}

int skip_space(char *str, int i)
{
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	return(i);
}

void    expand_str(char *str)
{
	int i = 0;
	int word_len;
	int first = 1;

	i = skip_space(str, i);
	while(str[i])
	{
		if (first == 0)
			write(1, "   ", 3);
		word_len = ft_wordlen(str + i);
		write(1, str + i, word_len);
		i = word_len + i;
		first = 0;
		i = skip_space(str, i);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		expand_str(av[1]);
	write(1, "\n", 1);
	return(0);
}
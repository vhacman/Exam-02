#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

int is_delimiter(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

void    last_word(char *str)
{
	int i = ft_strlen(str) - 1;

	while(i >= 0 && is_delimiter(str[i]))
		i--;
	while(i >= 0 && !is_delimiter(str[i]))
		i--;
	int start = i + 1;
	while(str[start] && !is_delimiter(str[start]))
	{
		ft_putchar(str[start]);
		start++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		last_word(av[1]);
	ft_putchar('\n');
	return 0;
}
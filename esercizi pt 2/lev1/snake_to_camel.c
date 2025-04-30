#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    snake_to_camel(char *str)
{
	int i = 0;
	int upper = 0;

	while(str[i])
	{
		if(str[i] == '_')
			upper = 1;
		else
		{
			if(upper && str[i] >= 'a' && str[i] <= 'z')
				ft_putchar(str[i] = str[i] - 32);
			else
				ft_putchar(str[i]);
			upper = 0;
		}
		i++;
	}
}

int main (int ac, char **av)
{
	if(ac == 2)
		snake_to_camel(av[1]);
	ft_putchar('\n');
	return(0);
}
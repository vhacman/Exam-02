#include <unistd.h>

void    ft_putstr(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	char *str = av[1];

	if (ac == 2)
	{
		ft_putstr(str);
		write (1, "\n", 1);
	}
	return (0);
}

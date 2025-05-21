#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int i = 0;

	while(str[i])
	{
		char c = str[i];
		if(c >= 'a' && c <= 'z')
			ft_putchar('z' - (c - 'a'));
		else if(c >= 'A' && c <= 'Z')
			ft_putchar('Z' - (c - 'A'));
		else
			ft_putchar(c);
		i++;
	}
}

int	main(int ac, char **av)
{
	if(ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
	return 0;
}

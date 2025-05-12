#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i = 0;

	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

// int	main(int ac, char **av)
// {
//     if(ac == 2)
//         ft_putstr(av[1]);
//     write(1, "\n", 1);
//     return 0;
// }
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    alpha_mirror(char *str)
{
	int i = 0;
	while(str[i])
	{
		char c = str[i];
		if(c >= 'a' && c <= 'z')
			ft_putchar('a' + 'z' - c);
		else if(c >= 'A' && c <= 'Z')
			ft_putchar('A' + 'Z' - c);
		else
			ft_putchar(c);
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		alpha_mirror(av[1]);
	ft_putchar('\n');
}

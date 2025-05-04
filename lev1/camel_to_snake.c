#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    camel_to_snake(char *str)
{
	int i = 0;
	while(str[i])
	{
		char c = str[i];
		if(c >= 'A' && c <= 'Z')
		{
			ft_putchar('_');
			ft_putchar(c + 32);
		}
		else
			ft_putchar(c);
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		camel_to_snake(av[1]);
	ft_putchar('\n');
	return(0);
}
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

void	str_capitalizer(char *str)
{
	int i = 0;

	while (str[i])
	{
		// Stampa spazi o tab
		while (str[i] && is_space(str[i]))
		{
			ft_putchar(str[i]);
			i++;
		}

		// Elabora una parola
		while (str[i] && !is_space(str[i]))
		{
			char current = str[i];
			char next = str[i + 1];

			if (is_lower(current) && (next == '\0' || is_space(next)))
				current -= 32; // minuscola finale → maiuscola
			else if (is_upper(current) && (next != '\0' && !is_space(next)))
				current += 32; // maiuscola non finale → minuscola

			ft_putchar(current);
			i++;
		}
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		ft_putchar('\n');
	while (i < argc)
	{
		str_capitalizer(argv[i]);
		i++;
	}
	return (0);
}

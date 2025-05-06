#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int is_prime(int n)
{
	int i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void	ft_putnbr(int n)
{
	if(n >= 10)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

void fprime(char *str)
{
	int n = atoi(str);
	int factor = 2;
	int first = 0;

	if (n == 1)
		write(1, "1", 1);
	while (factor <= n)
	{
		if (n % factor == 0 && is_prime(factor))
		{
			if (first)
				write(1, "*", 1);
			ft_putnbr(factor);
			first = 1;
			n = n / factor;
		}
		else
			factor++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		fprime(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}

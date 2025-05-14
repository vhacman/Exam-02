#include <unistd.h>


int	is_prime(int n)
{
	int i = 2;

	while(i < n)
	{
		if(n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int	ft_atoi(char *str)
{
	int i = 0;
	int res = 0;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return res;

}

void	ft_putnbr(int n)
{
	if(n >= 10)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int	add_prime_sum(int n)
{
	int sum = 0;
	int i = 2;

	while(i <= n)
	{
		if(is_prime(i))
			sum = sum + i;
		i++;
	}
	return sum;
}

int	main(int ac, char **av)
{
	if(ac == 1)
	{
		ft_putnbr(0);
		write(1, "\n", 1);
	}
	if(ac == 2)
	{
		int n = ft_atoi(av[1]);
		if(n > 0)
		{
			ft_putnbr(add_prime_sum(n));
			write(1, "\n", 1);
		}
		else
		{
			ft_putnbr(0);
			write(1, "\n", 1);
		}
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int	get_len(int n)
{
	int len = 0;

	if(n <= 0)
		len++;
	while(n != 0)
	{
		len ++;
		n = n / 10;
	}
	return len;
}


char	*ft_itoa(int nbr)
{
	long n = nbr;
	int len = get_len(n);
	char	*result;

	result = (malloc(sizeof(int) * (len + 1)));
	if(!result)
		return NULL;
	result[len] = '\0';
	
	if(n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}

	while(n != 0)
	{
		result[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return result;
}

/*
int	main()
{
	printf("%s\n", ft_itoa(-32435));
}*/










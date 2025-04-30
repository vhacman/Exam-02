#include <unistd.h>

int absolute(int n)
{
	if(n < 0)
		return(-n);
	else
		return(n);
}

int	get_len(int n)
{
	int	len = 0;

	if(n <= 0)
		len++;
	while(n != 0)
	{
		len++;
		n = n / 10;
	}
	return(len);
}
char	*ft_itoa(int nbr)
{
	int len = get_len(nbr);
	char *result = malloc(sizeof(char) * (len + 1));

	if(!result)
		return(NULL);
	result[len] = '\0';

	if(nbr < 0)
		result[0] = '-';
	else if (nbr == 0)
		result[0] = '0';
	while(nbr != 0)
	{
		len--;
		result[len] = absolute(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return(result);
}
#include <unistd.h>
#include <stdlib.h>

int get_len(int n)
{
    int len = 0;

    if(n < 0)
        len++;
    while(n != 0)
    {
        len++;
        n = n / 10;
    }
    return (len);
}

char    *ft_itoa(int nbr)
{
    int len = get_len(nbr);
    long n = nbr;
    char *result = malloc(len + 1);
    if(!result)
        return NULL;
    result[len] = '\0';
    if(n == 0)
        result[0] = '0';
    if(n < 0)
    {
        result[0] = '-';
        n = - n;
    }
    while(n != 0)
    {
        result[--len] = n % 10 + '0';
        n = n / 10;
    }
    return result;
}

/*
#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(-2147483648));
	return 0;
}*/

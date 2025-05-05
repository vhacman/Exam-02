#include <unistd.h>

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

char    *ft_itoa(int n)
{
    long nbr = n;
    int len = get_len(nbr);
    char *result = malloc(len + 1);
    if(!result)
        return NULL;
    result[len] = '\0';
    if(nbr == 0)
        result[len] = '0';
    if(nbr < 0)
    {
        result[len] = '-';
        nbr = - nbr;
    }
    while(nbr != 0)
    {
        len--;
        result[len] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
    return result;
}
